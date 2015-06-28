#include "LinkedList.h"
#include "LinkedListAdd.h"
#include "LinkedListERR.h"
#include <string.h>
#include <malloc.h>

void addDataToTail(LinkedList **list, void *data){
  LinkedList *current = *list;
  
  if(current == NULL){
    current = linkListNew(data);
    *list = current;
    return;
  }
  
  while (current->next != NULL){
    current = current->next;
  }
  current->next = linkListNew(data);
}

void addDataToHead(LinkedList **list, void *data){
  LinkedList *current = *list, *newHead;
  
  newHead = linkListNew(data);
  newHead->next = current;
  *list = newHead;
}

void addDataToMid(LinkedList **list, void *data, void *addAfterThis){
  LinkedList *current = *list, *mid, *tail;
  
  if(current == NULL)
    Throw(LL_ERR_DATA_IS_NOT_EXIST);
   
  while (current->data != addAfterThis){
    current = current->next;
    
    if(current == NULL)
      Throw(LL_ERR_DATA_IS_NOT_EXIST);
  }

  mid = linkListNew(data);
  tail = current->next;
  mid->next = tail;
  current->next = mid;
}