#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val);
    n->next = head;
    if (head != NULL) {
        head->prev = n;
    }

    head = n;
}

void insertAtTail(Node* &head, int val) {
    if (head == NULL) {
        insertAtHead(head, val);
        return;
    }

    Node* n = new Node(val);

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

Node* constructDLL(vector<int>& arr) {
    int n = arr.size();

    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < n; i++) {
        Node* currentNode = new Node(arr[i]);
        temp->next = currentNode;
        currentNode->prev = temp;
        temp = temp->next;
    }

    return head;
}

Node* sortList(Node* head) {
    if(head == NULL)
    return head;

    vector<int> v;
    Node* temp = head;

    while(temp != NULL){
        v.push_back(temp->val);
        temp = temp->next;
    }
    delete(temp);
    
    sort(v.begin(),v.end());
    Node* dummy=new Node(v[0]);
    head = dummy;

        for(auto i:v){
        Node* t=new Node(i);
        dummy->next=t;
        dummy=dummy->next;
    }
    return head->next;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt", "r", stdin);
        freopen("../../output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    Node* head = constructDLL(nums);


    return 0;
}
