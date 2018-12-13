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

#if 1
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
#endif
  
  /*
   * Test4: remove positive mutiple delete
   */
#if 1
  linked_list<int> rmTest4;
  cout << "\tTest04 - remove at start elements" << endl;
  rmTest4.list_add_element(201);
  rmTest4.list_add_element(1001);
  rmTest4.list_add_element(3001);

  cout << "\tNumber in list before removal = " << rmTest4.list_size() << endl;
  rmTest4.list_show();
  rmTest4.list_remove(201);
  cout << "\tNumber in list after  removal = " << rmTest4.list_size() << endl;
  rmTest4.list_show();
#endif

#if 1
  /*
   * Test5: remove positive at end
   */
  linked_list<int> rmTest5;
  cout << "\tTest05 - remove at end elements" << endl;
  rmTest5.list_add_element(1001);
  rmTest5.list_add_element(3001);
  rmTest5.list_add_element(201);

  cout << "\tNumber in list before removal = " << rmTest5.list_size() << endl;
  rmTest5.list_show();
  rmTest5.list_remove(201);
  cout << "\tNumber in list after  removal = " << rmTest5.list_size() << endl;
  rmTest5.list_show();
#endif

#if 1
  /*
   * Test6: remove positive numerous elements
   */
  linked_list<int> rmTest6;
  cout << "\tTest06 - remove numerous elements" << endl;

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
 // rmTest6.list_add_element(201);

  cout << "\tNumber in list before removal = " << rmTest6.list_size() << endl;
  rmTest6.list_show();
  rmTest6.list_remove(201);
  cout << "\tNumber in list after removal  = " << rmTest6.list_size() << endl;
  rmTest6.list_show();
#endif

  cout << "**** Linked List Class Test Template - remove  Ends" << endl;
  
  return 0;
}

//
// Fin
//
  
