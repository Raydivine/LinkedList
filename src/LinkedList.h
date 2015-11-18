#ifndef LinkedList_H
#define LinkedList_H

typedef struct LinkedList LinkedList;

struct LinkedList{
  void *data;
  LinkedList *next;
};

LinkedList *linkListNew(void *data); 
void clearLinkList(LinkedList *link); 
int isDataInList(LinkedList **list, void *data);

#endif // LinkedList_H
