#include<bits/stdc++.h>
using namespace std;


 class Node {
    public:
    int data;
    Node* next;

    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node* next) : data(x), next(next) {}
};


Node* constructLL(vector<int>& arr) {
    int n = arr.size();

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i=1; i<n; i++){
        Node* currNode = new Node(arr[i]);
        temp->next = currNode;
        temp = temp->next;
    }

    return head;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    Node* temp = constructLL(nums);
    
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}