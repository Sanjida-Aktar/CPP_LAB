#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtTail(Node* &head,Node* &tail,int data){
    Node* newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void printList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
            temp=temp->next;
    }
}
int main(){
     Node* head=NULL;
     Node* tail=NULL;
    int n;
    cin>>n;
    while(n--){
        int val;
        cin>>val;
        insertAtTail(head,tail,val);
    }
    printList(head);
    return 0;
}