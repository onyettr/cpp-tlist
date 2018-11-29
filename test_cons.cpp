/**
 * @brief  Test harness for single linked list constructor  operations
 * @file   test_cons.cpp
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

int test_cons ( void )
{
  // Sign on
  cout << "**** Linked List Class Template Test - constructors" << endl; 
    
  /*
   * Create an integer list
   */
  cout << "\tTest01a - create integer list" << endl;
  linked_list<int> consTest_integer;  
  cout << "\tsize of this list " << consTest_integer.list_size() << endl;  

  /*
   * Create an integer fill list
   */
  cout << "\tTest02a - create integer filled list" << endl;
  linked_list<int> consTest_Fill(4, 1001);
  cout << "\tsize of this list " << consTest_Fill.list_size() << endl;
  consTest_Fill.list_show();

  /*
   * Create an integer fill list
   */
  cout << "\tTest02b - create string  filled list" << endl;
  linked_list<string> consTest2_Fill(6, "Hello");
  cout << "\tsize of this list " << consTest2_Fill.list_size() << endl;
  consTest2_Fill.list_show();

  /*
   * Create an integer fill list
   */
  cout << "\tTest02  - create char n element zero filled list" << endl;
  linked_list<int> consTest3_Fill(6);
  cout << "\tsize of this list " << consTest3_Fill.list_size() << endl;
  consTest3_Fill.list_show();
  
  cout << "**** Linked List Class Test Template - cons Ends" << endl;
  
  return 0;
}

//
// Fin
//
  
