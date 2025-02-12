
#include "Node.h"
/*struct node
{
    int data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;*/
typedef struct {
	NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  //Node *new_node=(Node*) malloc(sizeof(Node));
  NodePtr new_node = (NodePtr)malloc(sizeof(Node));
if(new_node){ 
  //q->headPtr;
  new_node->data = x;
  new_node->nextPtr = NULL;
  if (q->size == 0)
  {
    q->headPtr = new_node;
  }
  else 
  {
    q->tailPtr->nextPtr = new_node;
  }
  q->tailPtr = new_node;
  q->size++;
  /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int value= t->data;
   if (q->size > 0)
   {
     q->headPtr = t->nextPtr;
   }
   else if (q->size == 1)
   {
     q->headPtr = NULL;
     q->tailPtr = NULL;
   } // ขยับหาง
  /*Finish dequeue */
   free (t);
   q->size--;
   return value;
   }
   printf("Empty queue\n");
   return 0;
}

