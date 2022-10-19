#include<bits/stdc++.h>
using namespace std;

class CQueue{

    public :
        int arr[10000];
        int size, front , rear;

        CQueue(){
            // cout << "Enter size of circular Queue : ";
            // cin >> size;
            size = 100;
            front = rear = -1;
        }
        bool isEmpty();
        void enqueue(int key);
        int dequeue();
        void display();

};


bool CQueue :: isEmpty(){
    if ((front==rear+1) or (front==-1 and rear==-1))
    {
        front = rear = -1;
        cout << "Queue is Empty"<< endl;
        return 1;
    }
    return 0;
}


void CQueue :: enqueue(int key){
    if( ((front==0 ) and (rear==size-1))  or (rear == front-1)){
        cout << " Queue is full" << endl;
        return ;
    }
    else if (front == -1){
        front = rear = 0 ;
    }
    else if(rear == size-1){
        rear = 0;
    }
    else rear++;
    arr[rear] = key;
}

int CQueue :: dequeue(){
    if (isEmpty())
    {
        return 0;
    }
    
    int ans = arr[front];
    arr[front] = -1;
    front++;
    if (front == size-1)
    {
        front =0;
    }
    
    return ans;
}


void CQueue :: display(){
    int start = front;
    int end = rear;
    if (isEmpty())
    {   
        return;
    }
    else{
        while (start != end)
        {
            cout << arr[start] << " ";
            start = (start+1) % size;
        }
        cout << arr[start] << " ";
    }
    
} 

int main()
{
    CQueue C;
    C.enqueue(2);
    C.enqueue(4);
    C.display();
    C.dequeue();
    C.display();
    return 0;
}