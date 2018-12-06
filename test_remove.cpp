/**  
 * @brief Test harness for single linked list remove operation
 * @file test_remove.cpp
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

int test_remove ( void )
{
  // Sign on
  cout << "**** Linked List Class Test Template - remove" << endl; 

  /*
   * create a new list
   */ 
  linked_list<int> rmTest;

  cout << "\tTest01 - remove element from empty list" << endl;
  try {
    rmTest.list_remove(48);    
  } catch (std::runtime_error& e) {
    cout << "Exception: " << e.what() << endl;
  } catch(...) {
    cout << "Exception: ouch something bad went on = " << endl;
  }

  /*
   * Test2: remove positive single delete
   */
  cout << "\tTest02 - remove one element " << endl;          
  rmTest.list_add_element(101);
  rmTest.list_add_element(201);
  rmTest.list_add_element(301);  
  cout << "\tNumber in list before removal = " << rmTest.list_size() << endl;
  rmTest.list_show();
  try {
    rmTest.list_remove(201);    
  } catch (std::runtime_error& e) {
    cout << "Exception: " << e.what() << endl;
  } catch(...) {
    cout << "Exception: ouch something bad went on = " << endl;
  }
  cout << "\tNumber in list after  removal = " << rmTest.list_size() << endl;      
  rmTest.list_show();

  /*
   * Test3: remove positive mutiple delete
   */
  cout << "\tTest03 - remove two elements " << endl;  
  rmTest.list_add_element(1001);
  rmTest.list_add_element(3001);  
  rmTest.list_add_element(201);
  rmTest.list_add_element(201);
  rmTest.list_add_element(3001);
  rmTest.list_add_element(4001);
  rmTest.list_add_element(5001);          
  rmTest.list_add_element(6001);
  rmTest.list_add_element(201);          
  
  cout << "\tNumber in list before removal = " << rmTest.list_size() << endl;
  rmTest.list_show();  
  try {
    rmTest.list_remove(201);    
  } catch (std::runtime_error& e) {
    cout << "Exception: " << e.what() << endl;
  } catch(...) {
    cout << "Exception: ouch something bad went on = " << endl;
  }
  cout << "\tNumber in list after  removal = " << rmTest.list_size() << endl;      
  rmTest.list_show();

  cout << "**** Linked List Class Test Template - remove  Ends" << endl;
  
  return 0;
}

//
// Fin
//
  
