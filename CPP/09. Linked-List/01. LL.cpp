#include <iostream>
using namespace std;

class Node
{
public:
     int data;
     Node *next;

     Node()
     {
          this->data = 0;
          this->next = NULL;
     }

     Node(int data)
     {
          this->data = data;
          this->next = NULL;
     }
};

int printLL(Node *&head)
{
     Node *temp = head;

     while (temp != NULL)
     {
          cout << temp->data << endl;
          temp = temp->next;
     }
};

// Insertion in LL

void insertAtHead(Node *&head, Node *&tail, int data)
{
     Node *newNode = new Node(data);
     newNode->next = head;
     if (head == NULL)
     {
          tail = newNode;
     }
     head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
     Node *newNode = new Node(data);

     if (tail == NULL)
     {
          tail = newNode;
          head = newNode;
     }
     else
     {
          tail->next = newNode;
     }

     tail = newNode;
}

// If LL empty
/*
if(head == NULL || tail == NULL){
     Node* newNode = new Node(data);
     head = newNode;
     tail = newNode;
     return;
}

*/

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
     Node *newNode = new Node(data);
     if (head == NULL)
     {
          head = newNode;
          tail = newNode;
          return;
     }
     // find position
     int i = 1;
     Node *prev = head;
     while (i < position)
     {
          prev = prev->next;
          i++;
     }
     Node *curr = prev->next;

     // Update newNode next to curr node
     newNode->next = curr;

     // Update prev next to newNode
     prev->next = newNode;
}

int main()
{
     // Node *head = new Node(10);
     Node *head = NULL;
     Node *tail = NULL;
     insertAtHead(head, tail, 20);
     insertAtHead(head, tail, 30);
     insertAtHead(head, tail, 40);
     insertAtHead(head, tail, 50);
     insertAtHead(head, tail, 60);
     insertAtHead(head, tail, 70);
     insertAtTail(head, tail, 77);

     insertAtPosition(head, tail, 101, 4);
     printLL(head);
     return 0;
}