#include "LinkedList.h"
#include "LinkedListRemove.h"
#include "LinkedListERR.h"
#include <string.h>
#include <malloc.h>
#include <stdio.h>

void removeDataFromList(LinkedList **list, void *removeData){
  LinkedList *current = *list, *tail;
    
  if(current == NULL)
    Throw(LL_ERR_DATA_IS_NOT_EXIST);
  else if(current->data == removeData){
    linkToNext(&current);
    *list = current;
    return;  
  }
  
  while(current->next != NULL){ 
    if(current->next->data == removeData){
      linkToNext( &(current->next) );
      return;
    }
    current = current->next;    
  }
  Throw(LL_ERR_DATA_IS_NOT_EXIST);
  
}

void linkToNext(LinkedList **list){
  LinkedList *current = *list, *tail;
  
  if(current == NULL)
    return;
  
  tail = current->next;
  free(current);
  current = tail;
  *list = current;
}
