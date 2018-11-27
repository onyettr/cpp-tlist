/**
 *	@file    test_unittest.cpp
 *	@brief   simple c++ linked list harness using googletest
 *	@author
 *	@note
 */

/*
******************************************************************************
Includes
******************************************************************************
*/
#include "list.h"
#include "gtest/gtest.h"

namespace {
class LinkedListTest : public testing::Test {
   protected:
};

/**
 * @brief Linked List Test SIZE list empty
 */
TEST_F(LinkedListTest, ListSizeIsZero) {
  linked_list SizeTest;

  EXPECT_EQ(0, SizeTest.list_size());
}

/**
 * @brief Linked List Test SIZE one element
 */
TEST_F(LinkedListTest, ListSizeIsOne) {
  linked_list SizeTest;

  SizeTest.list_add_element(100);

  EXPECT_EQ(1, SizeTest.list_size());
}

/**
 * @brief Linked List Test list_empty TRUE
 */
TEST_F(LinkedListTest, ListIsEmpty) {
  linked_list EmptyTest;

  EXPECT_TRUE(EmptyTest.list_empty());
}

/**
 * @brief Linked List Test list_empty FALSE
 */
TEST_F(LinkedListTest, ListIsNotEmpty) {
  linked_list EmptyTest;

  EmptyTest.list_add_element(101);
  EXPECT_FALSE(EmptyTest.list_empty());
}

/**
 * @brief Tests - front list is empty
 */
TEST_F(LinkedListTest, ListFrontEmpty) {
  linked_list EmptyTest;

  try {
    EmptyTest.list_get_front();
  }
  catch (std::runtime_error& e) {
    SUCCEED();
    return;
  }
  catch (...) {
    FAIL() << "odd exception?";
  }
  ADD_FAILURE() << "Exception not thrown as expected";
}

/**
 * @brief Tests - front list is ok
 */
TEST_F(LinkedListTest, ListFrontOneElement) {
  linked_list FrontTest;

  FrontTest.list_add_element(200);
  EXPECT_EQ(200,FrontTest.list_get_front());
}

/**
 * @brief Tests - front list is ok
 */
TEST_F(LinkedListTest, ListFrontTwoElement) {
  linked_list FrontTest;

  FrontTest.list_add_element(200);
  FrontTest.list_add_element(300);  
  EXPECT_EQ(200,FrontTest.list_get_front());
}

/**
 * @brief Tests - front list is ok
 */
TEST_F(LinkedListTest, ListFrontExplicit) {
  linked_list FrontTest;

  FrontTest.list_add_element(200);
  FrontTest.list_add_element(300);
  FrontTest.list_add_at_front(111);    
  EXPECT_EQ(111,FrontTest.list_get_front());
}

/**
 * @brief Tests - back list is empty
 */
TEST_F(LinkedListTest, ListBackEmpty) {
  linked_list BackTest;

  try {
    BackTest.list_get_back();
  }
  catch (std::runtime_error& e) {
    SUCCEED();
    return;
  }
  catch (...) {
    FAIL() << "odd exception?";
  }
  ADD_FAILURE() << "Exception not thrown as expected";
}

/**
 * @brief Tests - back list is ok
 */
TEST_F(LinkedListTest, ListTailOneElement) {
  linked_list BackTest;

  BackTest.list_add_element(201);
  EXPECT_EQ(201,BackTest.list_get_back());
}

/**
 * @brief Tests - back list is ok
 */
TEST_F(LinkedListTest, ListTailTwoElement) {
  linked_list BackTest;

  BackTest.list_add_element(201);
  BackTest.list_add_element(301);  
  EXPECT_EQ(301,BackTest.list_get_back());
}

/**
 * @brief Tests - back list is ok
 */
TEST_F(LinkedListTest, ListTailExplicitAddAtBack) {
  linked_list BackTest;

  BackTest.list_add_element(200);
  BackTest.list_add_element(300);
  BackTest.list_add_at_back(111);    
  EXPECT_EQ(111,BackTest.list_get_back());
}

/**
 * @brief Tests - add list is ok
 */
TEST_F(LinkedListTest, ListAddOneElement) {
  linked_list AddTest;

  AddTest.list_add_element(10);
  EXPECT_EQ(1,AddTest.list_size());
}

/**
 * @brief Tests - add more list is ok
 */
TEST_F(LinkedListTest, ListAddFourElement) {
  linked_list AddTest;

  AddTest.list_add_element(1);
  AddTest.list_add_element(2);
  AddTest.list_add_element(3);
  AddTest.list_add_element(4);
  EXPECT_EQ(4,AddTest.list_size());
}

/**
 * @brief Tests - add at position
 */
TEST_F(LinkedListTest, ListAddAtPosition) {
  linked_list AddTest;

  AddTest.list_add_element(1);
  AddTest.list_add_element(2);
  AddTest.list_add_element(3);
  AddTest.list_add_element(4);

  AddTest.list_add_position(2, 5);
  EXPECT_EQ(5,AddTest.list_size());
}

/**
 * @brief Tests - Get at position
 */
TEST_F(LinkedListTest, ListGetAtPosition) {
  linked_list AddTest;

  AddTest.list_add_element(1);
  AddTest.list_add_element(2);
  AddTest.list_add_element(3);
  AddTest.list_add_element(4);

  AddTest.list_add_position(2, 5);

  EXPECT_EQ(5,AddTest.list_get_position(2));
}
  
/**
 * @brief Tests - get list is empty
 */
TEST_F(LinkedListTest, ListGetEmpty) {
  linked_list GetTest;

  try {
    GetTest.list_get_position(1);
  }
  catch (std::runtime_error& e) {
    SUCCEED();
    return;
  }
  catch (...) {
    FAIL() << "odd exception?";
  }
  ADD_FAILURE() << "Exception not thrown as expected";
}

/**
 * @brief Tests - Delete test
 */
#if 0  
TEST_F(LinkedListTest, ListDeleteOneElement) {
  linked_list DelTest;

  DelTest.list_add_element(202);
  DelTest.list_add_element(203);
  DelTest.list_add_element(204);
  DelTest.list_add_element(205);    
  
  DelTest.list_delete_element(1);
  EXPECT_EQ(3,DelTest.list_size());
}
#endif
/**
 * @brief Tests - Delete test at Position
 */
TEST_F(LinkedListTest, ListDeleteElementAtPosition) {
  linked_list DelTest;

  DelTest.list_add_element(202);
  DelTest.list_add_element(203);
  DelTest.list_add_element(204);
  DelTest.list_add_element(205);    
  DelTest.list_delete_element(2);
  EXPECT_EQ(3,DelTest.list_size());
}

/**
 * @brief Tests - Delete test FRONT via Position
 */
TEST_F(LinkedListTest, ListDeleteElementFirstPosition) {
  linked_list DelTest;

  DelTest.list_add_element(202);
  DelTest.list_add_element(203);
  DelTest.list_add_element(204);
  DelTest.list_add_element(205);
  DelTest.list_dump();  
  DelTest.list_delete_element(0);
  DelTest.list_dump();
  EXPECT_EQ(203, DelTest.list_get_position(0));
}

  /**
 * @brief Tests - Delete test FRONT via direct method
 */
TEST_F(LinkedListTest, ListDeleteElementFront) {
  linked_list DelTest;

  DelTest.list_add_element(202);
  DelTest.list_add_element(203);
  DelTest.list_add_element(204);
  DelTest.list_add_element(205);
  DelTest.list_dump();  
  DelTest.list_delete_front();
  DelTest.list_dump();
  EXPECT_EQ(203, DelTest.list_get_position(0));
}

/**
 * @brief Tests - Delete front empty list
 */
TEST_F(LinkedListTest, ListDeleteFrontEmpty) {
  linked_list DelTest;

  try {
     DelTest.list_delete_front();
  }
  catch (std::runtime_error& e) {
    SUCCEED();
    return;
  }
  catch (...) {
    FAIL() << "odd exception?";
  }
  ADD_FAILURE() << "Exception not thrown as expected";
}

/**
 * @brief Tests - Delete test BACK via direct method
 */
TEST_F(LinkedListTest, ListDeleteElementBack) {
  linked_list DelTest;

  DelTest.list_add_element(101);
  DelTest.list_add_element(102);
  DelTest.list_add_element(103);
  DelTest.list_dump();  
  DelTest.list_delete_back();
  DelTest.list_dump();
  EXPECT_EQ(102, DelTest.list_get_back());
}

/**
 * @brief Tests - Delete back empty list
 */
TEST_F(LinkedListTest, ListDeleteBackEmpty) {
  linked_list DelTest;

  try {
     DelTest.list_delete_back();
  }
  catch (std::runtime_error& e) {
    SUCCEED();
    return;
  }
  catch (...) {
    FAIL() << "odd exception?";
  }
  ADD_FAILURE() << "Exception not thrown as expected";
}
  
/**
 * @brief Tests - Delete back one element
 */
TEST_F(LinkedListTest, ListDeleteBackOneElement) {
  linked_list DelTest;

  DelTest.list_add_element(200);
  DelTest.list_dump();  
  DelTest.list_delete_back();
  DelTest.list_dump();
  EXPECT_EQ(0, DelTest.list_size());
}

/**
 * @brief Tests - reverse mutiple element
 */
TEST_F(LinkedListTest, ListReverseMutipleElement) {
  linked_list revTest2;
  revTest2.list_add_element(1);
  revTest2.list_add_element(2);
  revTest2.list_add_element(3);
  revTest2.list_add_element(4);
  revTest2.list_add_element(5);      

  revTest2.list_reverse();  
  EXPECT_EQ(5, revTest2.list_get_front());
}

/**
 * @brief Tests - reverse zero element
 */
TEST_F(LinkedListTest, ListReverseZeroElement) {
  linked_list revTest3;

  try {
     revTest3.list_reverse();
  }
  catch (std::runtime_error& e) {
    SUCCEED();
    return;
  }
  catch (...) {
    FAIL() << "odd exception?";
  }
  ADD_FAILURE() << "Exception not thrown as expected";
}

/**
 * @brief Tests - search one element, postive
 */
TEST_F(LinkedListTest, ListSearchOneElementPositive) {
  linked_list srcTest;

  srcTest.list_add_element(101);
  EXPECT_EQ(0, srcTest.list_search(101));
}

/**
 * @brief Tests - search one element, negative
 */
TEST_F(LinkedListTest, ListSearchOneElementNegative) {
  linked_list srcTest;

  srcTest.list_add_element(101);
  EXPECT_EQ(-1, srcTest.list_search(102));
}
  
/**
 * @brief Tests - search multiple element, postive
 */
TEST_F(LinkedListTest, ListSearchMultiElementPositive) {
  linked_list serTest2;

  serTest2.list_add_element(1);
  serTest2.list_add_element(2);
  serTest2.list_add_element(3);
  serTest2.list_add_element(4);
  serTest2.list_add_element(5);      
  EXPECT_EQ(3, serTest2.list_search(4));
}

/**
 * @brief Tests - search multiple element, negative
 */
TEST_F(LinkedListTest, ListSearchMultiElementNegative) {
  linked_list serTest2;

  serTest2.list_add_element(1);
  serTest2.list_add_element(2);
  serTest2.list_add_element(3);
  serTest2.list_add_element(4);
  serTest2.list_add_element(5);      
  EXPECT_EQ(-1, serTest2.list_search(404));
}

/**
 * @brief Tests - search empty list
 */
TEST_F(LinkedListTest, ListSearchZeroElement) {
  linked_list serTest3;

  try {
     serTest3.list_search(101);
  }
  catch (std::runtime_error& e) {
    SUCCEED();
    return;
  }
  catch (...) {
    FAIL() << "odd exception?";
  }
  ADD_FAILURE() << "Exception not thrown as expected";
}
  
/**
 * @brief Tests - Copy test
 */
TEST_F(LinkedListTest, ListCopyList) {
  linked_list srcCopyTest;

  srcCopyTest.list_add_element(100);
  srcCopyTest.list_add_element(101);
  srcCopyTest.list_add_element(102);
  srcCopyTest.list_add_element(103);
  srcCopyTest.list_add_element(104);
  srcCopyTest.list_dump();
  
  linked_list dstCopyTest = srcCopyTest;
  dstCopyTest.list_dump();      

  EXPECT_EQ(5, dstCopyTest.list_size());
}
  
}
