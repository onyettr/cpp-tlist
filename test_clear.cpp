/**
 * @brief Test harness for single linked list delete operation
 * @file test_clear.cpp
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

int test_clear ( void )
{
  // Sign on
  cout << "**** Linked List Class Test Template - clear" << endl; 

  /*
   * create a new list
   */ 
  linked_list<int> delTest;

  cout << "\tTest01 - clear empty list, exception to be thrown" << endl;    
  try {
    delTest.list_clear();    
  } catch (std::runtime_error& e) {
    cout << "Exception: " << e.what() << endl;
  } catch(...) {
    cout << "Exception: ouch something bad went on = " << endl;
  }
  
  /*
   * Add an element
   */
  cout << "\tTest02 - clear list" << endl;      
  delTest.list_add_element(302);
  delTest.list_add_element(403);
  delTest.list_add_element(504);
  delTest.list_add_element(605);    
  cout << "\tNumber in list before clear (4) = " << delTest.list_size() << endl;  
  delTest.list_show();

  delTest.list_clear();
  cout << "\tNumber in list after clear (0) = " << delTest.list_size() << endl;    

  cout << "**** Linked List Class Test Template - deletion Ends" << endl;
  
  return 0;
}

//
// Fin
//
  
