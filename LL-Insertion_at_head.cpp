#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node() {
        this -> data = 0;
        this -> next = NULL;
    }

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void print (Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

void insertAtHead (Node* &head, int data){
    //Step 1: Create a node
    Node* newNode = new Node(data);

    //Step 2: New node ke next mein head ka address daal do
    newNode -> next = head;

    //Step 3: Ab head new node hai i.e first index/ starting
    head = newNode;
}

int main() {
    Node* head = new Node(10);
    insertAtHead(head,20);
    insertAtHead(head,50);
    insertAtHead(head,60);
    insertAtHead(head,70);
    insertAtHead(head,90);

    print(head);
}