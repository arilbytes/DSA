#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node*& head, Node*& tail, int data) {
    // Step 1: Create a new node
    Node* newnode = new Node(data);

    // Step 2: Check if the list is empty
    if (head == NULL) {
        // If the list is empty, new node becomes both head and tail
        head = newnode;
        tail = newnode;
    } else {
        // Step 3: Connect the new node to the current tail
        tail->next = newnode;

        // Step 4: Update the tail pointer
        tail = newnode;
    }
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 77);
    insertAtTail(head, tail, 79);

    print(head);

    return 0;
}


