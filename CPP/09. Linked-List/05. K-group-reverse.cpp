// https://leetcode.com/problems/reverse-nodes-in-k-group/description/

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

// K group reverse

/*
if k = 3. we have to make 3 node group and reverse it.

i/p
10 - 20 - 30 - 40  - 50 - 60 - x

o/p
30 - 20 - 10 -  60 - 50 - 40 - x


if k = 4

o/p

40 - 30 - 20 - 10 - 50 - 60 - x

also depend on question that rest of the node will reverse or not

*/

Node *reverseKNodes(Node *&head, int k) {

  if (head == NULL) {
    cout << "LL is empty" << endl;
    return NULL;
  }

  int length = getLength(head);
  if (k > length) {
    return head;
  }

  // Step 1 -  Reverse first K nodes
  Node *prevNode = NULL;
  Node *currentNode = head;
  Node *nextNode = NULL;
  int count = 0;

  while (count < k) {
    nextNode = currentNode->next;
    currentNode->next = prevNode;
    
    prevNode = currentNode;
    currentNode = nextNode;
    
    count++;
  }
  // Recursive call for nodes which are left
  if (nextNode != NULL) {
    head->next = reverseKNodes(nextNode, k);
  }
  // Return head of the modified LL
  return prevNode;
}

int main() {
  // Create 5 NODE LL
  Node *head = NULL;
  Node *tail = NULL;
  Node *first = new Node(10);
  Node *second = new Node(20);
  Node *third = new Node(30);
  Node *fourth = new Node(40);
  Node *fifth = new Node(50);
  // Node *sixth = new Node(60);
  head = first;
  tail = fifth;

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  // fifth->next = sixth;
  printLL(head);

  head = reverseKNodes(head, 3);
  cout << endl;
  printLL(head);
}