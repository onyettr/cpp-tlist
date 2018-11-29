/**
 * @brief  Test harness for single linked list assign  operations
 * @file   test_assign.cpp
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

int test_assign ( void )
{
  // Sign on
  cout << "**** Linked List Class Template Test - assign" << endl; 
    
  /*
   * Test01 assign test on empty list, exception to be thrown
   */
  linked_list<int> assignTest;
  cout << "\tTest01 - assign test empty list, exception to be thrown" << endl;    
  try {
    assignTest.list_assign(7,100);
  } catch (std::runtime_error& e) {
    cout << "Exception: " << e.what() << endl;
  } catch(...) {
    cout << "Exception: ouch something bad went on = " << endl;
  }

  /*
   * Test02 assign test on list with more element, exception to be thrown
   */
  assignTest.list_add_element(200);
  cout << "\tTest02 - assign test list not large enough, exception to be thrown" << endl;    
  try {
    assignTest.list_assign(7,100);
  } catch (std::runtime_error& e) {
    cout << "Exception: " << e.what() << endl;
  } catch(...) {
    cout << "Exception: ouch something bad went on = " << endl;
  }

  /*
   * Test03 correct assignment
   */
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
  cout << "\tNumber in list before assign = " << assignTest.list_size() << endl;
  assignTest.list_show();

  assignTest.list_assign(7, 100);
  assignTest.list_show();
  
  cout << "**** Linked List Class Test Template - assign Ends" << endl;
  
  return 0;
}

//
// Fin
//
  
