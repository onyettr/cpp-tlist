/**
 * MODULE: C++ Programming Examples
 *
 * @brief  Header file for simple linked list with templates
 * @author onyettr 
 * @file   list.h
 * @version
 */

/*
******************************************************************************
Includes
******************************************************************************
*/
#ifndef __LIST_H__
#define __LIST_H__

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



/**
 * @brief Single Linked List class 
 * @class linked_list
 */
template <class T>
class linked_list {
    private:
      /** @struct  list_element_t
       *  @brief Linked list "Element". 
       */
      struct list_element_t {
        T element;                            /*! element to store in list    */
        list_element_t *pNext;                /*! next element in the list    */
      };
  
      list_element_t *pHead;              // Head of the Linked List
      list_element_t *pTail;              // Tail of the Linked List
      int list_count = 0;                 // Number of nodes or Elements in the list
  
    public:
        linked_list(void);                /*! linked list constructor      */
        linked_list(const linked_list &); /*! linked list copy constructor */
        ~linked_list(void);               /*! linked list destructor       */  

    // Member functions
    void list_add_element (const T& value);               // Add an element to the list, increases list size by 1
    void list_add_at_front(const T& value);               // Add an element to the front of the list, increases list size by 1
    void list_add_at_back (const T& value);               // Add an element to the back  of the list, increases list size by 1
    void list_add_position(int position, const T& value); // Add an element at position,increases list size by 1
    T    list_get_position(int position);                 // return value at "position"
    T    list_get_front   (void);                         // return value of first list element
    T    list_get_back    (void);                         // return value of tail list element
    void list_delete_element(int position);               // Delete element  at position, decreases list size by 1
    void list_delete_front(void);                         // Delete first element of list, decreases list size by 1
    void list_delete_back (void);                         // Delete last  element of list, decreases list size by 1
    void list_reverse     (void);                         // Reverse the contents of list
    int  list_search      (const T& value);               // Search list for value, return position
    void list_sort        (void);                         // Sort the list
    void list_show        (void);                         // Show the contents of the linked list
    int  list_size        (void);                         // Number of elements in the list
    bool list_empty       (void);                         // is the list empty?
    list_element_t *GetListHead(void) {                   // Obtain Head iterator pointing to first element
        return pHead;
    }
    list_element_t *GetListTail(void) {                   // Obtain Tail iterator pointing to last element
        return pTail;
    }
};

#include "list.cpp"

#endif // __LIST_H__

