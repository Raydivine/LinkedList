#include "LinkedList.h"
#include <string.h>
#include <malloc.h>

LinkedList *linkListNew(void *data){
  LinkedList *link = malloc( sizeof(LinkedList) );
  link->data = data;
  link->next = NULL;

  return link;
}

void clearLinkList(LinkedList *link){
  LinkedList *tmp;
  
  while (link != NULL){
    tmp = link;
    link = link->next;
    free(tmp);
  }
}

int isDataInList(LinkedList **list, void *data){
  LinkedList *current = *list;
  
  while(current!=NULL){
    if(current->data == data)
      return 1;
    else  current = current->next;  
  }
  
  return 0;
}
