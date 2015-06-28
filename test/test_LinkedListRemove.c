#include "unity.h"
#include "LinkedList.h"
#include "LinkedListRemove.h"
#include "CException.h"

#define HEAD_TWO      head->next
#define HEAD_THREE    head->next->next
#define HEAD_FOUR     head->next->next->next
#define HEAD_FIVE     head->next->next->next->next

void setUp(void)
{
}

void tearDown(void)
{
}

void test_removeDataFromList_given_head_is_NULL_should_throw_LL_ERR_DATA_IS_NOT_EXIST(void){
  CEXCEPTION_T err;
  int one=1, two=2, three=3, five=5;
  
  LinkedList *head = NULL;

   Try{
    removeDataFromList( &head, &three);
    TEST_FAIL_MESSAGE("Expected LL_ERR_DATA_IS_NOT_EXIST to be thrown. But receive none");
  }Catch(err)

  clearLinkList(head); 
}