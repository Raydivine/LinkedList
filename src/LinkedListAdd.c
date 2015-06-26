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