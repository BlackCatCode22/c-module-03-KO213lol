#include <iostream>

using namespace std;

// Node structure for Singly Linked List
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the list
void insert(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete a node by value
void deleteNode(Node*& head, int value) {
    if (!head) return;
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp->next && temp->next->data != value) {
        temp = temp->next;
    }
    if (temp->next) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

// Function to display all nodes in the list
void display(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    // Insert nodes
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    
    cout << "Linked List after insertions: " << endl;
    display(head);

    // Delete a node
    deleteNode(head, 20);
    cout << "Linked List after deleting 20: " << endl;
    display(head);

    return 0;
}
