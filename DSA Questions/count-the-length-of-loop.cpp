#include<iostream>
using namespace std;

class ListNode{

 public:
    int data;
    ListNode* next;
    
    ListNode(int data){
      this->data=data;
      this->next=NULL;
    }
};

int countNodesinLoop(ListNode *head)
{
    
    // Code here
    
    ListNode* slow = head;
    ListNode* fast = head;
    
    while(fast!=NULL && fast->next != NULL){
        
      slow = slow->next;
      fast = fast->next->next;
      
      if(slow == fast){
          
          ListNode* temp = slow;
          temp = temp->next;
          int count = 1;
          
          while(temp!=slow){
              count++;
              temp = temp->next;
          }
          
          return count;
      }
      
    }
   return 0; 
}