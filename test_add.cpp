/**
 * @brief  Test harness for single linked list add operations
 * @file   test_add.cpp
 * @author onyettr
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

int test_add ( void )
{
  // Sign on
  cout << "**** Linked List Class Template Test - add" << endl; 
    
  /*
   * Add an integer element
   */
  cout << "\tTest01a - add single integer element" << endl;
  linked_list<int> addTest_integer;  
  addTest_integer.list_add_element(10);
  addTest_integer.list_show();  

  /*
   * Add a character element
   */
  cout << "\tTest01b - add single character element" << endl;
  linked_list<char> addTest_char;  
  addTest_char.list_add_element('X');
  addTest_char.list_show();  

  /*
   * Add a float element
   */
  cout << "\tTest01c - add single float element" << endl;
  linked_list<float> addTest_float;  
  addTest_float.list_add_element(3.143);
  addTest_float.list_show();  
 
  /*
   * Add a string element
   */
  cout << "\tTest01d - add single string element" << endl;
  linked_list<string> addTest_string;  
  addTest_string.list_add_element("hello");
  addTest_string.list_show();  
  
  cout << "\tTest02a - add more integer elements" << endl;  
  addTest_integer.list_add_element(20);
  addTest_integer.list_add_element(30);
  addTest_integer.list_add_element(40);
  addTest_integer.list_add_element(50);
  addTest_integer.list_add_element(60);  
  addTest_integer.list_show();
  cout << "\tTest02a - size of this list " << addTest_integer.list_size() << endl;  

  cout << "\tTest02b - add more integer elements" << endl;  
  addTest_char.list_add_element('A');
  addTest_char.list_add_element('B');
  addTest_char.list_add_element('C');
  addTest_char.list_show();
  cout << "\tTest02b - size of this list " << addTest_char.list_size() << endl;  

  cout << "\tTest02c - add more string elements" << endl;  
  addTest_string.list_add_element("there");
  addTest_string.list_add_element("is this");
  addTest_string.list_add_element("working?");
  addTest_string.list_show();
  cout << "\tTest02c - size of this list " << addTest_char.list_size() << endl;  
  
  cout << "\tTest02d - add to front" << endl;  
  addTest_integer.list_add_at_front(111);
  addTest_integer.list_show();
  cout << "\tTest02d - size of list " << addTest_integer.list_size() << endl;

  cout << "\tTest03a - add to back" << endl;  
  addTest_integer.list_add_at_back(222);
  addTest_integer.list_show();
  cout << "\tTest03a - size of list " << addTest_integer.list_size() << endl;

  cout << "\tTest04a - add at position" << endl;
  linked_list<int> emplaceTest;
  emplaceTest.list_add_element(1);
  emplaceTest.list_add_element(2);
  emplaceTest.list_add_element(3);
  emplaceTest.list_add_element(4);  
  emplaceTest.list_show();
  cout << "\tTest04a - size of list 4 = " << emplaceTest.list_size() << endl;

  cout << "\tTest05a - emplace at position 2" << endl;    
  emplaceTest.list_add_position(2, 5);
  emplaceTest.list_show();  
  cout << "\tTest05a - size of list " << emplaceTest.list_size() << endl;

  cout << "\tTest05b get at position 2 (5) " << emplaceTest.list_get_position(2) << endl;
  
  cout << "**** Linked List Class Test Template - add Ends" << endl;
  
  return 0;
}

//
// Fin
//
  
