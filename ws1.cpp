#include <iostream>
using namespace std;

// Part 1.1 Complete the node declaration
struct Node
{
Node(int val);
int data;
Node *next;
};


// Part 1.2 Define the Node constructor
Node::Node(int val){
  data = val;
  next = nullptr;
}
//constants
const int SENTINEL = -999;

//print function
void printList(Node *head);

//main
int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int num = 0;
    cout << "Enter a number to add to the list (" << SENTINEL << " to end)";
    cin >> num;
    while (num != SENTINEL) {
        // Part 2, create a new node pointer, and append it to the list. 
      Node *node = new Node(num);
      if (tail == nullptr) head = node;
      else tail->next = node;
      tail = node;
    
        cout << "Enter a number to add to the list (" << SENTINEL << " to end)";
        cin >> num;
    }

	printList(head);
    
    // Part 3, delete the list
  while(head != nullptr) {
	Node *next = head->next;
	delete head;
	head = next;
}
tail = nullptr;


    return 0;
}

// Part 4 fill in the print function to print the list
void printList(Node *head) {
  Node *current = head;
  while (current != nullptr){
    cout<< current->data << endl;
    current = current->next;
  }
}
