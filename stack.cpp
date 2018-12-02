/**
 * @brief  Stack example using the linked list
 * @file   stack.cpp
 * @author onyettr 
 * @version
 */

/*
******************************************************************************
Includes
******************************************************************************
*/
#include <iostream>
#include "list.h"

//linked_list<int> stack;
//linked_list<int> stack(3);
linked_list<int> stack(4,999);

void push(int value) {
  try {
    stack.list_add_at_front(value);
  } catch(std::runtime_error& e) {
    cout << "Exception: " << e.what() << endl;    
  }
}

int pop (void) {
  int value;
  try {
    // value = stack.list_get_front();
    // stack.list_delete_front();
    value = stack.list_pop_front();
  } catch(std::runtime_error& e) {
    cout << "Exception: " << e.what() << endl;    
  }
  
  return value;
}

bool empty(void) {
  return (stack.list_size() == 0) ? true : false;
}

void display(void) {
  try {
    stack.list_show();
  } catch(std::runtime_error& e) {
    cout << "Exception: " << e.what() << endl;    
  }
}  

int main ( void ){
  int i = 0;
  
  cout << "Stack Using Linked list library" << endl;

  push(1001);
  display();
  
  cout << "Pop stack = " << pop() << endl;
  display();
  cout << "Pop stack = " << pop() << endl;

  push(101);
  push(201);
  push(301);
  push(401);
  push(501);
  display();
  cout << "Pop stack = " << pop() << endl;
  push(777);
  display();

  while (!empty()) {
    cout << i++ << " Pop stack = " << pop() << endl;
  }

}
