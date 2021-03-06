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
      int max_list_size = 0xFFFFFF;       // If size if provided
  
    public:
        linked_list(void);                /*! linked list constructor creates empty container, no elements */
  //        explicit linked_list(int number); /*! linked list fill constructor n elememts, assigned 0       */
        linked_list(const linked_list &); /*! linked list copy constructor creates copy of each element */
        linked_list(int number, const T&);/*! linked list fill constructor n elements, assigned T       */
        ~linked_list(void);               /*! linked list destructor       */  

        linked_list &operator=(const linked_list<T> &rhs);
  
        void list_add_element (const T& value);
        void list_add_position(int position, const T& value); // Add element with value at position 
        void list_add_at_front(const T& value);               // Add element at the front
        void list_add_at_back (const T& value);               // Add element at the back
        T    list_get_position(int position);                 // Get element value at position
        T    list_get_front   (void);                         // Get element value at front
        T    list_get_back    (void);                         // Get element value at back
        void list_assign      (int n, const T& value);        // Assign (fill) n elements with value
        T    list_pop_back    (void);                         // Return the back  value, decreases list size by 1
        T    list_pop_front   (void);                         // Return the front value, decreases list size by 1
        void list_delete_element(int position);               // Delete element  at position, decreases list size by 1
        void list_delete_front(void);                         // Delete first element of list, decreases list size by 1
        void list_delete_back (void);                         // Delete last  element of list, decreases list size by 1
        void list_clear       (void);                         // Delete all  elements of list, decreases list size to 0
        void list_reverse     (void);                         // Reverse the contents of list
        void list_remove      (const T& value);               // remove elements with a specific value
        template <typename Predicate> void list_remove_if (Predicate pred); // remove elements with a Binary predicate
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

