#include "Single_Linked_List.h"
#include <stddef.h>

using namespace std;

/**Constructor*/
template<typename Item_Type>
Single_Linked_List<Item_Type>::Single_Linked_List(){
    head = NULL;
    tail = NULL;
    num_items = 0;
}

template<typename Item_Type>
/** Construct a copy of a list. */
Single_Linked_List<Item_Type>::Single_Linked_List(const Single_Linked_List<Item_Type>& other) {
    head = NULL;
    tail = NULL;
    num_items = 0;
    for (const_iterator itr = other.begin();
    itr != other.end(); ++itr) {
    push_back(*itr);
    }
}

/** Destructor*/
template<typename Item_Type>
Single_Linked_List<Item_Type>::~Single_Linked_List() {
    while (head != NULL) {
    DNode* current = head;
    head = head->next;
    delete current;
    }
    tail = NULL;
    num_items = 0;
}

template<typename Item_Type>
/** Pushes an element to the front of list 
 *  @param item item to be placed at front
*/
void Single_Linked_List<Item_Type>::push_front(const Item_Type& item){
    Node* head = new Node(item);
    if (head->next != NULL)
        head->next;
    if (tail = NULL)
        tail = head;
        
    num_items++;
}

template<typename Item_Type>
/** Pushes an element to the back of list
 * @param item item to be placed at back
*/
void Single_Linked_List<Item_Type>::push_back(const Item_Type& item){

}

/** Removes an element from the front of list */
void pop_front();

/** Removes an element from the back of list */
void pop_back();

/** Returns first element from list*/
void front();

/** Returns last element from list*/
void back();

/** Checks if list is empty
 * @return true if empty, false if not 
*/
bool empty();

template<typename Item_Type>
/** Insert item at position index (starting at 0). 
 * Insert at the end if index is beyond the end of the list
 * @param index position in list
 * @param item item to be inserted
*/
void insert(size_t index, const Item_Type& item);

/** Remove the item at position index. 
 * @param index position in list
 * @return true if successful, 
 * return false if index is beyond the end of the list.
*/
bool remove(size_t index);

template<typename Item_Type>
/** Searches for item in list
 * @param item element to be searched for
 * @return the position of the first occurrence of item if it is
found, else return the size of the list if it is not found
*/
size_t find(const Item_Type& item);
