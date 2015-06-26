#include "unity.h"
#include "LinkedList.h"
#include "LinkedListAdd.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_addDataToTail_given_head_carry_one_and_add_number2_to_tail_should_from_list_of_data_one_two(void){
  int one = 1, two = 2;
  LinkedList *link = linkListNew(&one);

  addDataToTail( &link, &two);
  TEST_ASSERT_NOT_NULL(link);
  TEST_ASSERT_EQUAL(1, *(int*)link->data);
  TEST_ASSERT_NOT_NULL(link->next);
  TEST_ASSERT_EQUAL(2, *(int*)link->next->data);
  TEST_ASSERT_NULL(link->next->next);
  clearLinkList(link);
}

void test_addDataToTail_given_head_carry_NULL_add_number2_to_tail_should_form_list_of_data_NULL_two(void){
  int two = 2;
  LinkedList *link = linkListNew(NULL);

  addDataToTail( &link, &two);
  TEST_ASSERT_NOT_NULL(link);
  TEST_ASSERT_NULL(link->data);
  TEST_ASSERT_NOT_NULL(link->next);
  TEST_ASSERT_EQUAL(2, *(int*)link->next->data);
  clearLinkList(link);
}

void test_addDataToTail_given_head_carry_one_and_add_NULL_to_tail_should_form_list_of_data_one_NULL(void){
  int one = 1;
  LinkedList *link = linkListNew(&one);
  
  addDataToTail( &link, NULL);
  TEST_ASSERT_NOT_NULL(link);
  TEST_ASSERT_EQUAL(1, *(int*)link->data);
  TEST_ASSERT_NOT_NULL(link->next);
  TEST_ASSERT_NULL(link->next->data);
  TEST_ASSERT_NULL(link->next->next);
  clearLinkList(link);
  
}

void test_addDataToTail_given_head_is_NULL_and_add_1_to_tail_should_form_head_is_one(void){
  int one = 1;
  LinkedList *link = NULL;

  addDataToTail( &link, &one);
  TEST_ASSERT_NOT_NULL(link);
  TEST_ASSERT_EQUAL(1, *(int*)link->data);
  TEST_ASSERT_NULL(link->next);
  clearLinkList(link);
}
