#include<iostream>
using namespace std;
class Node{ //creating a node
    public:
    int data; //kya kya hotta hai ek node mai ek hotta hai data 
    Node* next; // ek hota ha ushka address jo ki next 

    Node(){      //constructor call yeh q karte hai isitilization ke liye karte hai hai
    
    //yeh tab call hogga jab default call hogga

    // cout<<"this is Default ctor";
    this->data = 0;
    this->next = NULL;
    }
    Node(int data){

        // cout<<"this is Parameterized ctor called"<<endl;
        this->data=data;
        this->next=NULL;

    }
    //ab print kaise karna hai ishko
};
void print(Node* head){
        //agr hm linked list ko kisi v function mai transvers karte hi to hm original matlb actual pointer pass nahi karenge na value na hi reference hm copy banyenge yeh apr glti kar k=sakte hai note traverse karte waqt 
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ->";
            temp = temp -> next;
        }
}

int getLengLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

//interAt Head ke liye

void InsterAtHead(Node* &head, Node* &tail ,int data){
//but aise v ho sakta hai ki linkedList empty hoggi tb tb kya karenge tb hum ek case banyenge jo empty ll ke liye hogga 
    if(head==NULL){
        //ek node create karenge 
        Node* newNode = new Node(data);
        //aur head ko new node pr lagga denge
        head = newNode;
        tail = newNode;
    }
else{
    //create a new node
    Node* newNode = new Node(data);
    newNode ->next = head;
    head = newNode;
}
}

//InterAt Tail
void InsertAtTail(Node* &head, Node* tail, int data){
    if(head==NULL){
        //create a node
        Node* newNode = new Node(data);
        //update the node
        head = newNode;
        tail = newNode;
    }else{
        //create a node 
        Node* newNode = new Node(data);
        tail ->next = newNode;
        tail = newNode;
    }
}
void insertAtPosition(Node* &head, Node* tail,int data,int position){
    //ek case yeh hooga ki hm head pr kar rahe honge 
    int length = getLengLL(head);
    if(position ==1){
        InsterAtHead(head,tail,data);

    }
    //yeh v ek case hai ki wo last mai hogga tb yeh case use kr sakte hai
    else if(position > length +1){
        InsertAtTail(head,tail,data);
    }
    else{
        //ab middle mai insert karna hai 

        //phele node create karna hogga
        Node* newNode = new Node(data);
        // ab traverse karna hooga
        Node* current = head;
        Node* previous = NULL;

        while(position != 1){
            previous = current;
            current = current->next;
            position--;
        }
        previous -> next = newNode;
        newNode ->next = current ;
    }
}
int main(){
//original game

Node* head = NULL;
Node* tail = NULL;

InsterAtHead(head, tail, 10);
InsterAtHead(head, tail, 20);
InsterAtHead(head, tail, 30);
InsertAtTail(head,tail,50);
insertAtPosition(head,tail,5000,5);
print(head);





    // static allocation
//  Node a;

//du=ynamic allocation

// Node* first = new Node(10);
// Node* second = new Node(20);
// Node* third = new Node(30);
// Node* fourth = new Node(40);
// Node* fifth = new Node(50);

// // yeha ab linked list create ho chuka hai aise create hotti hai 
// first->next =second;
// second->next = third;
// third->next = fourth;
// fourth->next = fifth;

// Node* head = first;
// Node* tail = fifth; // Define the tail pointer
// cout<<"printing ll"<<endl;
// cout<<"printing ll"<<endl;
// print(head);
// cout<<endl;

// InsterAtHead(head,tail, 500);
// print(head);

// cout<<endl;
// InsertAtTail(head,tail, 400);
// print(head);
// // cout<<"lenghth of linkedList is"<<getLengLL(head);

return 0;


}