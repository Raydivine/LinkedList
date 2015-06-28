#include "LinkedList.h"
#include "LinkedListAdd.h"
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