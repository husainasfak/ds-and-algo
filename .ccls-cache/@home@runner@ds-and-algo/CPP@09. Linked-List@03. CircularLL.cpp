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

void printLL(Node *&head) {
  Node *temp = head;

  while (temp != NULL) {
    cout << temp->data << endl;
    temp = temp->next;
  }
};




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


int main() {
  Node *head = NULL;
  Node *tail = NULL;

  return 0;
}