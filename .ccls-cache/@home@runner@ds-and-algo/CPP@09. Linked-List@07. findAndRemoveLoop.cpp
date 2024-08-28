// Find that LL has loop or not
// q1 - find loop - using map or Floyed Cycle detection (slow fast pointer)
// q2 - starting point of loop
// q3 - delete the loop



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



// q1 - find loop 
bool findLoop(Node * &head){
  Node * slow = head;
  Node * fast = head;

  while(fast != NULL){
    fast = fast ->next;
    if(fast != NULL){
      fast = fast -> next;
      slow = slow ->next;
      
    }

    if(slow == fast){
      return true;
    }
  }

  return false;
}


// q2 - Starting point

Node * startingPoint(Node * &head){
  Node * slow = head;
  Node * fast = head;

  while(fast != NULL){
    fast = fast ->next;
    if(fast != NULL){
      fast = fast -> next;
      slow = slow ->next;

    }

    if(slow == fast){
      // again slow will point to head when we got the cycle in LL
      slow = head;
      break;
    }
  }

  // got the cycle and set the slow pointer to head

  while(slow != fast){
    slow = slow->next;
    fast = fast->next;
  }

  return slow;
}

// q3 -  remove cycle

void removeCycle(Node * &head){
  Node * slow = head;
  Node * fast = head;

  while(fast != NULL){
    fast = fast ->next;
    if(fast != NULL){
      fast = fast -> next;
      slow = slow ->next;

    }

    if(slow == fast){
      // again slow will point to head when we got the cycle in LL
      slow = head;
      break;
    }
  }

  // got the cycle and set the slow pointer to head
  // maintain the prev pointer to remove
  Node *prevNode = fast; // or slow 


  while(slow != fast){
    prevNode = fast;
    slow = slow->next;
    fast = fast->next;
  }

  // Remove cycle
  prevNode->next = NULL;
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
  Node *sixth = new Node(60);
  Node *seventh = new Node(70);
  Node *eighth = new Node(80);
  Node *ninth = new Node(90);
  head = first;
  tail = ninth;

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = sixth;
  sixth->next = seventh;
  seventh->next = eighth;
  eighth->next = ninth;
  ninth->next = fifth;
  bool isLoop = findLoop(head);
  Node *startPoint = startingPoint(head);

  cout << "loop " << isLoop << endl;
  cout << "start point " << startPoint->data << endl;

  removeCycle(head);
  bool isLoopAgain = findLoop(head);
  cout << "loop again " << isLoopAgain << endl;
}