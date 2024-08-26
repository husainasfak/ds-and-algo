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

// Find Middle of LL
/*
 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> x
 length = 6;
 middle node = even(n/2) =  30;


 15 -> 25 -> 35 -> 45 -> 55 -> x

 length = 5;
middleNode = odd((n/2)+1) =  35


Approach - 1 -
step -  find length - O(N)
length = even(n/2) or odd((n/2)+1) - O(N)
total =  O(N)


Approach - 2 - Two pointer, fast and slow pointer, tortoise algo
step -  1. Slow and Fast pointer pointing to head.
step - 2. slow 1 node and fast 2 node move forward.
step - 3. first fast moves 2 nodes then slow moves 1 node - Important case
step - 4. for odd number of nodes. fast pointers pointing to null then slow
pointer is the middle node of the LL.
step -5.in the even case, in the question it will mentioned that you have to
take  (n/2) or ((n/2)+1) node.
*/

Node *getMiddle(Node *&head) {
  if (head == NULL) {
    cout << "LL is empty";
  }

  if (head->next == NULL) {
    return head;
  }

  // LL has more than 1 node

  Node *slow = head;
  // this fast pointer give ((n/2)+1) node as middle in the case of even node.
  // if you want (n/2) as middle node init fast = head->next
  Node *fast = head;

  while (slow != NULL && fast != NULL) {
    // If we move fast pointer directly we probably get NULL Pointer Exception
    // Move 1 pointer at a time

    fast = fast->next;
    if (fast != NULL) {
      fast = fast->next;
      slow = slow->next;
    }
  }
  return slow;
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
  head = first;
  tail = sixth;

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = sixth;
  printLL(head);

  // q1. Find Middle of LL
  Node *MiddleNode = getMiddle(head);
  cout << "Middle Node is : " << MiddleNode->data << endl;
}