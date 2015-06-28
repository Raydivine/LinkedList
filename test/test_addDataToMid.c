#include "unity.h"
#include "LinkedList.h"
#include "LinkedListAdd.h"

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

void test_addDataToMid_given_head_is_NULL_add_1_after_NULL_should_form_List_1(void){
  LinkedList *head = NULL;
  int one = 1;
  
  addDataToMid( &head,&one, NULL);
  TEST_ASSERT_NOT_NULL(head);
  TEST_ASSERT_EQUAL(1, *(int*)head->data);
  TEST_ASSERT_NULL(HEAD_TWO);
  
  clearLinkList(head);  
}

void xtest_addDataToHead_given_list_1_2_3_and_add_5_after_2_should_form_1_2_5_3(void){
  int one=1, two2=2, three=3, five=5;
  
  
  LinkedList *head = linkListNew(&one);
  addDataToTail( &head, &two2);
  addDataToTail( &head, &three);
  
  addDataToHead( &head, &five, &two);
  TEST_ASSERT_NOT_NULL(head);
  TEST_ASSERT_EQUAL(5, *(int*)head->data);
  TEST_ASSERT_EQUAL(1, *(int*)HEAD_TWO->data);
  TEST_ASSERT_EQUAL(2, *(int*)HEAD_THREE->data);
  TEST_ASSERT_EQUAL(3, *(int*)HEAD_FOUR->data);
  TEST_ASSERT_NULL(HEAD_FIVE);

  clearLinkList(head);  
}

void xtest_addDataToHead_given_list_1_2_3_and_add_NULL_should_form_NULL_1_2_3(void){
  int one=1, two2=2, three=3;
  
  
  LinkedList *head = linkListNew(&one);
  addDataToTail(&head,&two2);
  addDataToTail(&head,&three);
  
  addDataToHead(&head,NULL);
  TEST_ASSERT_NOT_NULL(head);
  TEST_ASSERT_NULL(head->data);
  TEST_ASSERT_EQUAL(1, *(int*)HEAD_TWO->data);
  TEST_ASSERT_EQUAL(2, *(int*)HEAD_THREE->data);
  TEST_ASSERT_EQUAL(3, *(int*)HEAD_FOUR->data);
  TEST_ASSERT_NULL(HEAD_FIVE);

  clearLinkList(head);  
}



