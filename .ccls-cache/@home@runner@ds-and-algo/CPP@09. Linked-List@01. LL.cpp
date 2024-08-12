#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node() {
    this->data = 0;
    this->next = NULL;
  }

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }

  // ~Node() {
  //   //  initializes a pointer current to the current node object (i.e., the
  //   node
  //   //  whose destructor is being called).
  //   Node *current = this;

  //   //  declares a pointer nextNode that will be used to store the address of
  //   //  the next node in the list as we iterate           through it.
  //   Node *nextNode;

  //   //  The while loop starts by checking if current is not NULL. This loop
  //   will
  //   //  continue as long as there are nodes left in the list.
  //   while (current != NULL) {
  //     nextNode = current->next;
  //     delete current;
  //     current = nextNode;
  //   }
  // }
};

void printLL(Node *&head) {
  Node *temp = head;

  while (temp != NULL) {
    cout << temp->data << endl;
    temp = temp->next;
  }
};

// Insertion in LL

void insertAtHead(Node *&head, Node *&tail, int data) {
  Node *newNode = new Node(data);
  newNode->next = head;
  if (head == NULL) {
    tail = newNode;
  }
  head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data) {
  Node *newNode = new Node(data);

  if (tail == NULL) {
    tail = newNode;
    head = newNode;
  } else {
    tail->next = newNode;
  }

  tail = newNode;
}

int findLength(Node *&head) {
  int length = 0;

  Node *temp = head;

  while (temp != NULL) {
    temp = temp->next;
    length++;
  }
  return length;
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

void insertAtPosition(Node *&head, Node *&tail, int data, int position) {
  Node *newNode = new Node(data);
  if (head == NULL) {
    head = newNode;
    tail = newNode;
    return;
  }
  // find position
  int i = 1;
  Node *prev = head;
  while (i < position) {
    prev = prev->next;
    i++;
  }
  Node *curr = prev->next;

  // Update newNode next to curr node
  newNode->next = curr;

  // Update prev next to newNode
  prev->next = newNode;
}

void deleteAtAnyPosition(int position, Node *&head, Node *&tail) {
  if (head == NULL) {
    cout << "LL is empty";
    return;
  }

  int length = findLength(head);
  if (position > length) {
    cout << "Invalid Position";
    return;
  }

  // Delete first node or head
  if (position == 1) {
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    return;
  }

  // Delete at tail
  if (position == length) {
    // Find Previous
    Node *prev = findPrevNode(head, length);

    prev->next = NULL;
    Node *temp = tail;
    tail = prev;
    delete temp;
    return;
  }

  // Delete at any position
  Node *prev = findPrevNode(head, position);
  Node *current = prev->next;

  prev->next = current->next;

  current->next = NULL;

  delete current;
  return;
}

int main() {
  // Node *head = new Node(10);
  Node *head = NULL;
  Node *tail = NULL;
  insertAtHead(head, tail, 20);
  insertAtHead(head, tail, 30);
  insertAtHead(head, tail, 40);
  insertAtHead(head, tail, 50);
  insertAtHead(head, tail, 60);
  insertAtHead(head, tail, 70);
  // insertAtTail(head, tail, 77);

  // insertAtPosition(head, tail, 101, 4);
  printLL(head);
  cout << "Length of LL" << findLength(head) << endl;
  deleteAtAnyPosition(4, head, tail);
  printLL(head);
  cout << "Length of LL" << findLength(head) << endl;
  return 0;
}