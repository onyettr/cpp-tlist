/**
 * @brief Test harness for single linked list delete operation
 * @file test_del.cpp
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

int test_del ( void )
{
  // Sign on
  cout << "**** Linked List Class Test Template - deletion" << endl; 

  /*
   * create a new list
   */ 
  linked_list<int> delTest;
  
  /*
   * Add an element
   */
  delTest.list_add_element(202);
  delTest.list_add_element(203);
  delTest.list_add_element(204);
  delTest.list_add_element(205);
  delTest.list_add_element(206);      
  cout << "\tNumber in list before deletion = " << delTest.list_size() << endl;  
  delTest.list_show();

  cout << "\tTest01 - del single element" << endl;
  delTest.list_delete_element(2);
  cout << "\tNumber in list after deletion at 2  = " << delTest.list_size() << endl;    
  delTest.list_show();

  cout << "\tTest02 - del first element" << endl;  
  delTest.list_delete_element(0);
  cout << "\tNumber in list after deletion at 0 = " << delTest.list_size() << endl;    
  delTest.list_show();

  cout << "\tTest03 - del two elements" << endl;
  linked_list<int> delTest1;
  delTest1.list_add_element(1000);
  delTest1.list_add_element(1001);
  delTest1.list_add_element(1002);
  delTest1.list_add_element(1003);
  delTest1.list_add_element(1004);
  delTest1.list_add_element(1005);  
  cout << "\tNumber in list before deletion = " << delTest1.list_size() << endl;  
  delTest1.list_show();

  try {
    delTest1.list_delete_element(2);   
    delTest1.list_delete_element(4);  
  } catch (std::runtime_error& e) {
    cout << "Exception: " << e.what() << endl;
  } catch(...) {
    cout << "Exception: ouch something bad went on = " << endl;
  }
  cout << "\tNumber in list after deletion at 0 = " << delTest1.list_size() << endl;    
  delTest1.list_show();

  cout << "\tTest04 - del illegal element, exception to be thrown" << endl;    
  try {
    delTest.list_delete_element(delTest.list_size()+1);    
  } catch (std::runtime_error& e) {
    cout << "Exception: " << e.what() << endl;
  } catch(...) {
    cout << "Exception: ouch something bad went on = " << endl;
  }

  cout << "**** Linked List Class Test Template - deletion Ends" << endl;
  
  return 0;
}

//
// Fin
//
  
