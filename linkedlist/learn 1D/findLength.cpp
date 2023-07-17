#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

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

void display(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int length(Node* head){
    Node* temp = head;
    int count = 0;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    return count;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    Node* head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,1);
  
    display(head);

    cout<<length(head);
}