#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

class LinkList
{
private:
    struct Node *Head ;
public:
    LinkList();
    void insertAtTail(int key) ;
    void insertAtHead(int key) ;
    void insertInBetw(int key) ;
    void display() ;
    void del();
    ~LinkList();
};

LinkList::LinkList()
{
    Head = NULL ;
}

void LinkList :: del(){
    struct Node *temp = Head;
    Head = Head -> next;
    free(temp);
}


void LinkList :: insertAtTail (int key)
{
    struct Node *temp = new Node, *p=Head;

    if(Head == NULL){
        Head = temp;
        temp -> next = NULL;
        temp -> data = key ;
    }
    else{
        while(p->next != NULL){
            p = p->next;
        }
        p -> next = temp;
        temp -> next= NULL;
        temp -> data = key;
    }
}

void LinkList :: insertAtHead(int key){
    struct Node *temp = new Node ;

    if(Head==NULL){
        Head = temp;
        temp -> next = NULL;
        temp -> data = key ;
    }
    else{
        temp -> next = Head;
        Head = temp;
        temp ->data = key;
    }
}


void LinkList :: insertInBetw(int key){
    struct Node * temp = new Node , *p = Head;
    int n ;

   if(Head==NULL){
        Head = temp;
        temp -> next = NULL;
        temp -> data = key ;
    }
    else{
        cout << "Enter a number after whichh you wants to add data";
        cin >> n;

        while(p -> data != n){
            p = p -> next;
        }
        temp -> next = p -> next;
        p -> next = temp;
        temp -> data = key;
    }
}

void LinkList :: display(){
    struct Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }cout << "\n";
    
}

LinkList::~LinkList()
{
}

int main()
{
    LinkList L;

    L.insertAtTail(1);
    L.insertAtTail(8);
    L.insertAtTail(9);
    L.insertAtTail(4);
    L.insertAtTail(41);
    L.display();
    L.insertAtHead(40);
    L.insertAtHead(49);
    L.display();
    L.insertAtTail(22);
    L.insertInBetw(77);
    // L.insertInBetw(73);
    L.display();
    L.del();
    L.insertAtTail(90);
    L.display();


    return 0;
}