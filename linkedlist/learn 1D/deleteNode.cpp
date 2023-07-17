#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);

    if(head == NULL){
        head = new_node;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;

}

void deleteNode(Node* &head, int val) {
    if(head == NULL){
        return;
    }

    if(head->next == NULL){
        Node* todelete = head;
        head = head->next;
        delete todelete;
    }

    Node* temp = head;
    while (temp->next->data != val){
        temp = temp->next;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
    
}

void display(Node* head){
    Node* temp = head;
    
    while (temp->next != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){
    Node* head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,1);

    deleteNode(head,1);    
    display(head);

    return 0;
}