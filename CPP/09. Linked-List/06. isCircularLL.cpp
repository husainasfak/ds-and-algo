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



/*

Find that LL is circular or not

1. with temp variable
2. slow and fast pointer
3. using map

*/



int main() {
  // Create 5 NODE LL
  Node *head = NULL;
  Node *tail = NULL;
  Node *first = new Node(10);
  Node *second = new Node(20);
  Node *third = new Node(30);
  Node *fourth = new Node(40);
  Node *fifth = new Node(50);
  Node *sixth = new Node(60);
  head = first;
  tail = fifth;

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = sixth;
  printLL(head);


  cout << endl;
  printLL(head);
}