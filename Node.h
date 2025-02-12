//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
    int data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;


void enqueue(NodePtr * head, NodePtr* tail, int x)
{
  Node* new_node=(NodePtr) malloc(sizeof(Node));
  if(new_node)
  { 
    new_node->data = x;
    new_node->nextPtr = NULL;
    if (*head == NULL) //or *tail == NULL
    {
      *head = new_node;
    }
    else
    {
      (*tail)->nextPtr = new_node; //*(*tail).nextPtr = new_node;
    }
    *tail = new_node;
    /* Finish queue*/
  }
}


int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
   if(t)
   {
      int value= t->data;
      *head = t->nextPtr; //*head = (*head)->nextPtr;
      if (*head = NULL) // ขยับหางก่อน if (*head == *tail) *tail = NULL; *head = t->nextPtr; // if (!*tail)
      {
        *tail = NULL;
      } //มีเพื่อดูว่าไม่มีหัวแถวแล้วก็ไม่ควรมีหางแถวแล้ว
   /* Finish dequeue*/
   free(t);
   return value;
   }
   printf("Empty queue");
   return 0;
}



#endif
