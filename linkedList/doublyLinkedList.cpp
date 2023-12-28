#include<iostream>
using namespace std;
class Node{
    public:
    //doubly mai kya kya honna chahiye ek prev aur ek next;
    int data;
    Node* prev;
    Node* next;
    Node(){//default ctor
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
    void print(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
    }
    int findLength(Node* &head){
        Node* temp = head;
        int len = 0;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }
    //insert at head;
    //2 case bannte hai ek agr NULL hogga toh dushra NULL nhi hogga
    void insertAtHead(Node* &head,Node* &tail,int data){
        if(head==NULL){
            //node create karna hai fir add karna hai
            Node* newNode= new Node(data);
            head = newNode;
            tail = newNode;
        }else{
            //jab empty nhi hogga
            //create karo
            Node* newNode = new Node(data);
            //newNode ka next ko head pr point karwao
            newNode->next = head;
            //head ka prev ko nw node pr pont karwao
            head->prev= newNode;
            //jo head the ushko update kar ke new node pr le jao
            head = newNode;
        }
    }
    void insertAtTail(Node* &head, Node* &tail, int data){
         if(head==NULL){
            //node create karna hai fir add karna hai
            Node* newNode= new Node(data);
            head = newNode;
            tail = newNode;
    }else{
        Node* newNode = new Node(data);
        //new Node ka prev ko tail pr point karwao
        newNode->prev = tail;
        //tail ka jo next hai ushko newNode pr
        tail->next = newNode;
        //update karo ab tail ko 
        tail= newNode;
    }

}
void insertAtPosition(Node* &head,Node* &tail,int data, int position){
    //jab mujhe head mai insert karna ho 
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        int len = findLength(head);
        if(position == 1){
            insertAtHead(head,tail,data);
        }else if(position == len + 1){
            insertAtTail(head,tail,data);
        }else{
            Node* newNode = new Node(data);
            Node* prevNode=NULL;
            Node* currNode = head;
            //travesre kar ke waha jaana hai jaha add karna hai
            while(position != 1){
                position--;
                prevNode = currNode;
                currNode = currNode->next;
            }
            //updation karna hai waha to pauch gaye
            //jo prev ka next hai ushko new node pr le jaao aur ushka new node ka prev ko prevNode pr le jaao
            prevNode->next = newNode;

            newNode->prev = prevNode;
            // jo curr node ka prev hai ushko new node pr le jaao aur jo new node ka next hai ushko curr node pr
            currNode->prev =newNode;
            newNode->next = currNode;
        }
    }
}
int main(){
    Node* head =NULL;
    Node* tail =NULL;
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,70);
    insertAtHead(head,tail,80);
    print(head);
    cout<<endl;
    insertAtPosition(head,tail,10,10);
    print(head);
    return 0;
}