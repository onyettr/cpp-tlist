/**
 * @brief  Test harness for single linked list add to front operations
 * @file   test_front.cpp
 * @author onyettr
 *
 */

/*
******************************************************************************
Includes
******************************************************************************
*/
#include <iostream>
#include "list.h"

using namespace std;

/*
******************************************************************************
Private Constants
******************************************************************************
*/

/*
******************************************************************************
Private Types
******************************************************************************
*/

/*
******************************************************************************
Private variables (static)
******************************************************************************
*/

/*
******************************************************************************
Private Macros
******************************************************************************
*/

/*
******************************************************************************
Global variables
******************************************************************************
*/

/*
******************************************************************************
Exported Global variables
******************************************************************************
*/

/*
******************************************************************************
Prototypes of all functions contained in this file (in order of occurance)
******************************************************************************
*/

int test_front (void)
{
  // Sign on
  cout << "Linked List Class Test Template - front" << endl; 

  /*
   * create a new list
   */ 
  linked_list<int> addTest;
  
  /*
   * Add an element
   */
  cout << "Test01 - return front, no list elements" << endl;
  try {
    cout << "Return (  0) = " << addTest.list_get_front() << endl;
  } catch(std::runtime_error& e) {
    cout << "Exception: " << e.what() << endl;
  } catch(...) {
    cout << "Exception: ouch something bad went on = " << endl;
  }

  cout << "Test02 - return front, list has one elenment" << endl;  
  addTest.list_add_element(200);
  cout << "Return (200) = " << addTest.list_get_front() << endl;  

  cout << "Test03 - return front, list has two elements" << endl;  
  addTest.list_add_element(300);
  cout << "Return (200) = " << addTest.list_get_front() << endl;  

  cout << "Test04 - return front, list has new front element" << endl;  
  addTest.list_add_at_front(111);
  cout << "Return (111) = " << addTest.list_get_front() << endl;  
  addTest.list_show();
  
  cout << "\tTest05 - test example" << endl;
  linked_list<int> mylist (2,100);         // two ints with a value of 100
  mylist.list_show();

  try {
  mylist.list_add_at_front (200);
  mylist.list_show();  
  mylist.list_add_at_front (300);  
  mylist.list_show();
  } catch(std::runtime_error& e) {
    cout << "Exception: " << e.what() << endl;
  }
         
  return 0;
}

//
// Fin
//
  
