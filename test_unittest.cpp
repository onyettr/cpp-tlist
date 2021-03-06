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
 * @brief Linked List Test ADD INT
 */
TEST_F(LinkedListTest, ListAddInt) {
  linked_list<int> AddTest;

  AddTest.list_add_element(100);
  EXPECT_EQ(100, AddTest.list_get_front());
}

/**
 * @brief Linked List Test ADD float
 */
TEST_F(LinkedListTest, ListAddFloat) {
  linked_list<float> AddTest;

  AddTest.list_add_element(3.143);
  EXPECT_FLOAT_EQ(3.143, AddTest.list_get_front());
}

/**
 * @brief Linked List Test ADD string
 */
TEST_F(LinkedListTest, ListAddString) {
  linked_list<string> AddTest;

  AddTest.list_add_element("hello");
  EXPECT_EQ("hello", AddTest.list_get_front());
}

/**
 * @brief Linked List Test ADD more elements
 */
TEST_F(LinkedListTest, ListAddMoreElementsInt) {
  linked_list<int> addTest_integer;

  addTest_integer.list_add_element(20);
  addTest_integer.list_add_element(30);
  addTest_integer.list_add_element(40);
  addTest_integer.list_add_element(50);
  addTest_integer.list_add_element(60);  

  EXPECT_EQ(5, addTest_integer.list_size());
}
  
/**
 * @brief Linked List Test ADD more elements char
 */
TEST_F(LinkedListTest, ListAddMoreElementsChar) {
  linked_list<char> addTest;

  addTest.list_add_element('A');
  addTest.list_add_element('B');
  addTest.list_add_element('C');

  EXPECT_EQ(3, addTest.list_size());
}
  
/**
 * @brief Linked List Test SIZE list empty
 */
TEST_F(LinkedListTest, ListSizeIsZero) {
  linked_list<int> SizeTest;

  EXPECT_EQ(0, SizeTest.list_size());
}

/**
 * @brief Linked List Test SIZE one int element
 */
TEST_F(LinkedListTest, ListSizeIsOneInt) {
  linked_list<int> SizeTest;

  SizeTest.list_add_element(100);

  EXPECT_EQ(1, SizeTest.list_size());
}

/**
 * @brief Linked List Test list_empty TRUE
 */
TEST_F(LinkedListTest, ListIsEmpty) {
  linked_list<int> EmptyTest;

  EXPECT_TRUE(EmptyTest.list_empty());
}

/**
 * @brief Linked List Test list_empty FALSE
 */
TEST_F(LinkedListTest, ListIsNotEmpty) {
  linked_list<int> EmptyTest;

  EmptyTest.list_add_element(101);
  EXPECT_FALSE(EmptyTest.list_empty());
}

/**
 * @brief Tests - front list is empty
 */
TEST_F(LinkedListTest, ListFrontEmpty) {
  linked_list<int> EmptyTest;

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
  linked_list<int> FrontTest;

  FrontTest.list_add_element(200);
  EXPECT_EQ(200,FrontTest.list_get_front());
}

/**
 * @brief Tests - front list is ok
 */
TEST_F(LinkedListTest, ListFrontTwoElement) {
  linked_list<int> FrontTest;

  FrontTest.list_add_element(200);
  FrontTest.list_add_element(300);  
  EXPECT_EQ(200,FrontTest.list_get_front());
}

/**
 * @brief Tests - front list is ok
 */
TEST_F(LinkedListTest, ListFrontExplicit) {
  linked_list<int> FrontTest;

  FrontTest.list_add_element(200);
  FrontTest.list_add_element(300);
  FrontTest.list_add_at_front(111);    
  EXPECT_EQ(111,FrontTest.list_get_front());
}

/**
 * @brief Tests - back list is empty
 */
TEST_F(LinkedListTest, ListBackEmpty) {
  linked_list<int> BackTest;

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
  linked_list<int> BackTest;

  BackTest.list_add_element(201);
  EXPECT_EQ(201,BackTest.list_get_back());
}

/**
 * @brief Tests - back list is ok
 */
TEST_F(LinkedListTest, ListTailTwoElement) {
  linked_list<int> BackTest;

  BackTest.list_add_element(201);
  BackTest.list_add_element(301);  
  EXPECT_EQ(301,BackTest.list_get_back());
}

/**
 * @brief Tests - back list is ok
 */
TEST_F(LinkedListTest, ListTailExplicitAddAtBack) {
  linked_list<int> BackTest;

  BackTest.list_add_element(200);
  BackTest.list_add_element(300);
  BackTest.list_add_at_back(111);    
  EXPECT_EQ(111,BackTest.list_get_back());
}

/**
 * @brief Tests - back list is empty
 */
TEST_F(LinkedListTest, ListTailExplicitAddAtBackEmpty) {
  linked_list<int> BackTest;

  BackTest.list_add_at_back(111);    
  EXPECT_EQ(111,BackTest.list_get_back());
}
  
/**
 * @brief Tests - add list is ok
 */
TEST_F(LinkedListTest, ListAddOneElement) {
  linked_list<int> AddTest;

  AddTest.list_add_element(10);
  EXPECT_EQ(1,AddTest.list_size());
}

/**
 * @brief Tests - add more list is ok
 */
TEST_F(LinkedListTest, ListAddFourElement) {
  linked_list<int> AddTest;

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
  linked_list<int> AddTest;

  AddTest.list_add_element(1);
  AddTest.list_add_element(2);
  AddTest.list_add_element(3);
  AddTest.list_add_element(4);

  AddTest.list_add_position(2, 5);

  EXPECT_EQ(5,AddTest.list_get_position(2));
}

/**
 * @brief Tests - Get at position
 */
TEST_F(LinkedListTest, ListGetAtPosition) {
  linked_list<int> AddTest;

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
  linked_list<int> GetTest;

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
 * @brief Tests - pop back Positive
 */
TEST_F(LinkedListTest, ListPopBack) {
  linked_list<int> popTest;

  popTest.list_add_element(1);
  popTest.list_add_element(2);
  popTest.list_add_element(3);
  popTest.list_add_element(4);

  popTest.list_pop_back();
  EXPECT_EQ(3,popTest.list_size());
}

/**
 * @brief Tests - pop front Positive
 */
TEST_F(LinkedListTest, ListPopFront) {
  linked_list<int> popTest;

  popTest.list_add_element(1);
  popTest.list_add_element(2);
  popTest.list_add_element(3);
  popTest.list_add_element(4);

  EXPECT_EQ(1,popTest.list_pop_front());
}

/**
 * @brief Tests - pop front Empty
 */
TEST_F(LinkedListTest, ListPopBackEmpty) {
  linked_list<int> popTest;

  try {
    popTest.list_pop_front();    
  }
  catch (std::runtime_error& e) {
    SUCCEED();
    return;
  }
  catch (...) {
    FAIL() << "odd exception?";
  }
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
  linked_list<int> DelTest;

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
  linked_list<int> DelTest;

  DelTest.list_add_element(202);
  DelTest.list_add_element(203);
  DelTest.list_add_element(204);
  DelTest.list_add_element(205);
  DelTest.list_show();  
  DelTest.list_delete_element(0);
  DelTest.list_show();
  EXPECT_EQ(203, DelTest.list_get_front());
}

  /**
 * @brief Tests - Delete test FRONT via direct method
 */
TEST_F(LinkedListTest, ListDeleteElementFront) {
  linked_list<int> DelTest;

  DelTest.list_add_element(202);
  DelTest.list_add_element(203);
  DelTest.list_add_element(204);
  DelTest.list_add_element(205);
  DelTest.list_show();  
  DelTest.list_delete_front();
  DelTest.list_show();
  EXPECT_EQ(203, DelTest.list_get_front());
}

/**
 * @brief Tests - Delete front empty list
 */
TEST_F(LinkedListTest, ListDeleteFrontEmpty) {
  linked_list<int> DelTest;

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
  linked_list<int> DelTest;

  DelTest.list_add_element(101);
  DelTest.list_add_element(102);
  DelTest.list_add_element(103);
  DelTest.list_show();  
  DelTest.list_delete_back();
  DelTest.list_show();
  EXPECT_EQ(102, DelTest.list_get_back());
}

/**
 * @brief Tests - Delete back empty list
 */
TEST_F(LinkedListTest, ListDeleteBackEmpty) {
  linked_list<int> DelTest;

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
  linked_list<int> DelTest;

  DelTest.list_add_element(200);
  DelTest.list_show();  
  DelTest.list_delete_back();

  try {
     DelTest.list_show();
  } catch (std::runtime_error& e) {
    SUCCEED();
    return;
  } catch (...) {
    FAIL() << "odd exception?";
  }
  ADD_FAILURE() << "Exception not thrown as expected";
}

/**
 * @brief Tests - clear negative, empty list
 */
TEST_F(LinkedListTest, ListClearOnEmpty) {
  linked_list<int> ClearTest;

  try {
     ClearTest.list_clear();
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
 * @brief Tests - clear positive
 */
TEST_F(LinkedListTest, ListClearPositive) {
  linked_list<int> delTest;
  
  delTest.list_add_element(302);
  delTest.list_add_element(403);
  delTest.list_add_element(504);
  delTest.list_add_element(605);    

  delTest.list_clear();
  EXPECT_EQ(0, delTest.list_size());
}
  
/**
 * @brief Tests - reverse mutiple element
 */
TEST_F(LinkedListTest, ListReverseMutipleElement) {
  linked_list<int> revTest2;
  
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
  linked_list<int> revTest3;

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
 * @brief Tests - search one element, positive
 */
TEST_F(LinkedListTest, ListSearchOneElementPositive) {
  linked_list<int> srcTest;

  srcTest.list_add_element(101);
  EXPECT_EQ(0, srcTest.list_search(101));
}

/**
 * @brief Tests - search one element, negative
 */
TEST_F(LinkedListTest, ListSearchOneElementNegative) {
  linked_list<int> srcTest;

  srcTest.list_add_element(101);
  EXPECT_EQ(-1, srcTest.list_search(102));
}
  
/**
 * @brief Tests - search multiple element, postive
 */
TEST_F(LinkedListTest, ListSearchMultiElementPositive) {
  linked_list<int> serTest2;

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
  linked_list<int> serTest2;

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
  linked_list<int> serTest3;

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
  linked_list<int> srcCopyTest;

  srcCopyTest.list_add_element(100);
  srcCopyTest.list_add_element(101);
  srcCopyTest.list_add_element(102);
  srcCopyTest.list_add_element(103);
  srcCopyTest.list_add_element(104);
  srcCopyTest.list_show();
  
  linked_list<int> dstCopyTest = srcCopyTest;
  dstCopyTest.list_show();      

  EXPECT_EQ(5, dstCopyTest.list_size());
}

/**
 * @brief Tests - constructor fill test
 */
TEST_F(LinkedListTest, ListCtorFill) {
  linked_list<int> consTest_Fill(4, 1001);
  
  EXPECT_EQ(4, consTest_Fill.list_size());
}

/**
 * @brief Tests - constructor fill test
 */
#if 0  
TEST_F(LinkedListTest, ListCtorFillZero) {
  linked_list<int> consTest_Fill(4);
  
  EXPECT_EQ(4, consTest_Fill.list_size());
}
#endif
  
/**
 * @brief Tests - assign test, negative empty 
 */
TEST_F(LinkedListTest, ListAssignEmpty) {
  linked_list<int> assignEmpty;

  try {
     assignEmpty.list_assign(7,100);
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
 * @brief Tests - assign test, negative not enough room
 */
TEST_F(LinkedListTest, ListAssignSize) {
  linked_list<int> assignEmpty;

  assignEmpty.list_add_element(200);
  try {
     assignEmpty.list_assign(7,100);
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
 * @brief Tests - assign test, positive
 */
TEST_F(LinkedListTest, ListAssignPass) {
  linked_list<int> assignTest;

  assignTest.list_add_element(200);
  assignTest.list_add_element(200);
  assignTest.list_add_element(200);
  assignTest.list_add_element(200);
  assignTest.list_add_element(200);
  assignTest.list_add_element(200);
  assignTest.list_add_element(200);
  assignTest.list_add_element(200);
  assignTest.list_add_element(200);
  assignTest.list_add_element(200);

  assignTest.list_assign(7, 100);
  assignTest.list_show();

  EXPECT_EQ(100, assignTest.list_get_front());  
}

/**
 * @brief Tests - remove test, negative list empty
 */
TEST_F(LinkedListTest, ListRemoveEmpty) {
  linked_list<int> removeEmpty;

  try {
     removeEmpty.list_remove(48);
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
 * @brief Tests - remove test, positive single delete
 */
TEST_F(LinkedListTest, ListRemoveOneElementPass) {
  linked_list<int> rmTest;

  rmTest.list_add_element(101);
  rmTest.list_add_element(201);
  rmTest.list_add_element(301);  

  rmTest.list_remove(201);    
  EXPECT_EQ(2, rmTest.list_size());  
}

/**
 * @brief Tests - remove test, positive single delete, at the start (Head)
 */
TEST_F(LinkedListTest, ListRemoveOneElementPassFront) {
  linked_list<int> rmTest;

  rmTest.list_add_element(201);
  rmTest.list_add_element(101);
  rmTest.list_add_element(301);  

  rmTest.list_remove(201);    
  EXPECT_EQ(2, rmTest.list_size());  
}

/**
 * @brief Tests - remove test, positive single delete, at the End (Tail)
 */
TEST_F(LinkedListTest, ListRemoveOneElementPassBack) {
  linked_list<int> rmTest;

  rmTest.list_add_element(101);
  rmTest.list_add_element(301);
  rmTest.list_add_element(201);  

  rmTest.list_remove(201);    
  EXPECT_EQ(2, rmTest.list_size());  
}

/**
 * @brief Tests - remove test, positive, no deletes
 */
TEST_F(LinkedListTest, ListRemoveOneElementNotthereFail) {
  linked_list<int> rmTest;

  rmTest.list_add_element(101);
  rmTest.list_add_element(201);
  rmTest.list_add_element(301);  

  rmTest.list_remove(401);    
  EXPECT_EQ(3, rmTest.list_size());  
}

/**
 * @brief Tests - remove test, positive, only one element
 */
TEST_F(LinkedListTest, ListRemoveOneElementFail) {
  linked_list<int> rmTest;

  rmTest.list_add_element(201);

  rmTest.list_remove(201);
  EXPECT_TRUE(rmTest.list_empty());  
}

/**
 * @brief Tests - remove test, positive mutiple delete
 */
TEST_F(LinkedListTest, ListRemoveManyElementPass) {
  linked_list<int> rmTest6;

  rmTest6.list_add_element(201);
  rmTest6.list_add_element(201);
  rmTest6.list_add_element(201);
  rmTest6.list_add_element(201);
  rmTest6.list_add_element(1001);
  rmTest6.list_add_element(2001);
  rmTest6.list_add_element(201);
  rmTest6.list_add_element(201);
  rmTest6.list_add_element(201);
  rmTest6.list_add_element(201);
  rmTest6.list_add_element(3001);
//  rmTest6.list_add_element(201);

  rmTest6.list_remove(201);
  rmTest6.list_show();
  EXPECT_EQ(3, rmTest6.list_size());
  EXPECT_EQ(3001, rmTest6.list_get_back());
}
}
