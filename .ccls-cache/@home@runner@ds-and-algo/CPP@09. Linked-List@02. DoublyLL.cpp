#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *prev;
  Node *next;

  Node() {
    this->data = 0;
    this->prev = NULL;
    this->next = NULL;
  }

  Node(int data) {
    this->data = data;
    this->prev = NULL;
    this->next = NULL;
  }
};

// O(N)
void printLL(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " " << endl;
    temp = temp->next;
  }
}

// O(N)

int getLength(Node *&head) {
  int length = 0;
  Node *temp = head;

  while (temp != NULL) {
    temp = temp->next;
    length++;
  }
  return length;
}

void insertAtHead(Node *&head, Node *&tail, int data) {

  Node *newNode = new Node(data);

  // LL is empty
  if (head == NULL) {
    head = newNode;
    tail = newNode;
    return;
  }

  // If LL is not empty

  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data) {
  Node *newNode = new Node(data);
  // LL is empty
  if (head == NULL) {
    head = newNode;
    tail = newNode;
    return;
  }

  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
}
void insertAtPosition(Node *&head, Node *&tail, int data, int position) {
  Node *newNode = new Node(data);
  // LL is empty
  if (head == NULL) {
    head = newNode;
    tail = newNode;
    return;
  }

  if (position == 1) {
    insertAtHead(head, tail, data);
    return;
  }

  int length = getLength(head);

  if (position >= length) {
    insertAtTail(head, tail, data);
    return;
  }

  // Insert at middle

  int i = 1;
  Node *prevNode = head;
  while (i < position) {
    prevNode = prevNode->next;
    i++;
  }
  Node *current = prevNode->next;

  prevNode->next = newNode;
  newNode->next = current;
  newNode->prev = prevNode;
  current->prev = newNode;
}

Node *findPrevNode(Node *&head, int atPosition) {
  int i = 1;
  Node *prev = head;
  while (i < atPosition - 1) {
    prev = prev->next;
    i++;
  }
  return prev;
}

void deleteNode(Node *&head, Node *&tail, int position) {
  // LL is empty
  if (head == NULL) {
    cout << "LL is empty";
    return;
  }

  // if LL has only one node
  if (head->next == NULL) {
  }

  // Delete head node
  if (position == 1) {
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL; // important step
    delete temp;
    return;
  }

  // Delete tail node
  int length = getLength(head);
  if (position > length) {
    cout << "Out of bound";
  }
  if (position == length) {
    Node *prevNode = findPrevNode(head, length);
    Node *currentNode = prevNode->next;
    prevNode->next = currentNode->next;
    currentNode->next->prev = prevNode;
    currentNode->prev = NULL;
    currentNode->next = NULL;
    delete currentNode;
    return;
  }
}

int main() {
  Node *head = NULL;
  Node *tail = NULL;
  insertAtHead(head, tail, 20);
  insertAtHead(head, tail, 10);
  insertAtTail(head, tail, 30);
  insertAtPosition(head, tail, 15, 2);
  printLL(head);
  return 0;
}