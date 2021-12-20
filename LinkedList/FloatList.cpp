 #ifndef FLOATLIST_H 
 #define FLOATLIST_H 

#include <iostream>
using namespace std;
class FloatList{
    private:
    struct ListNode
    {
        float value;
        struct ListNode *next;
    };

    ListNode *head;
public:
       FloatList(void)
       {head =nullptr;}

       void appendNode(float num)
       {
           ListNode *newNode, *nodePtr;

           newNode= new ListNode;
           newNode->value=num;
           newNode->next=nullptr;

           if(!head)
           {
               head=newNode;
           }
           else
           {
               nodePtr=head;
               while(nodePtr->next)
               {
                 nodePtr= nodePtr->next;
               }
               nodePtr->next=newNode;
           }
       }
       void displayList ()
       {
           ListNode *nodePtr;
           
           nodePtr=head; 
           while(nodePtr)
           {
               cout<<nodePtr->value<<endl;
               nodePtr=nodePtr->next;

           }

       }
       void insertNode(float num)
       {
           ListNode *newNode, *nodePtr, *previous;
           newNode=new ListNode;
           newNode->value=num;
           if (!head)
           {
               head=newNode;/* code */
           }
           else{

               nodePtr=head;
               previous=nullptr;
               while (nodePtr!=nullptr&& nodePtr->value<newNode->value)
               {
                    nodePtr=nodePtr->next;
                 if (nodePtr->value>=newNode->value)  /* code */
                 {
                     previous->next=newNode;
                     newNode->next=nodePtr;

                 }
                
               }
               nodePtr->next=newNode;
               newNode->next=nullptr;
               
           }
           
       }
};
#endif