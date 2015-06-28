#include "LinkedList.h"
#include "LinkedListRemove.h"
#include "LinkedListERR.h"
#include <string.h>
#include <malloc.h>

void removeDataFromList(LinkedList **list, void *removeData){
  LinkedList *current = *list;
  
  if(current == NULL)
    Throw(LL_ERR_DATA_IS_NOT_EXIST);
  
  
}
