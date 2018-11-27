/**
 * @brief Test harness for single linked list Empty operations
 * @file test_empty.cpp
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

int test_empty( void )
{
  // Sign on
  cout << "**** Linked List Class Test - empty" << endl; 

  /*
   * create a new list
   */ 
  linked_list emptyTest;
  
  cout << "\tTest01 - list empty  TRUE = " << (emptyTest.list_empty() == true ? "TRUE" : "FALSE") << endl;  

  emptyTest.list_add_element(100);
  cout << "\tTest02 - list empty  FALSE= " << (emptyTest.list_empty() == true ? "TRUE" : "FALSE") << endl;

  cout << "**** Linked List Class Test - empty Ends" << endl;
  
  return 0;
}

//
// Fin
//
  
