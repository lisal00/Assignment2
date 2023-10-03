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

/** Construct a copy of a list. 
template<typename Item_Type>
Single_Linked_List<Item_Type>::Single_Linked_List(const Single_Linked_List<Item_Type>& other) {
    head = NULL;
    tail = NULL;
    num_items = 0;
    for (const_iterator itr = other.begin();
        itr != other.end(); ++itr) {
        push_back(*itr);
    }
}
*/

/** Destructor*/
template<typename Item_Type>
Single_Linked_List<Item_Type>::~Single_Linked_List() {
    while (head != NULL) {
        Node* current = head;
        head = head->next;
        delete current;
    }
    tail = NULL;
    num_items = 0;
}

/** Pushes an element to the front of list 
 *  @param item item to be placed at front
*/
template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_front(const Item_Type& item){
    head = new Node(item, head);
    if (tail == NULL){
        tail = head;
    }
    num_items++;
}

/** Pushes an element to the back of list
 * @param item item to be placed at back
*/
template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_back(const Item_Type& item){
    if (tail != NULL){
    tail->next = new Node(item);
    tail = tail->next;
    } else{ //list was empty
        push_front(item);
    }
    num_items++;
}

/** Removes an element from the front of list */
template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_front(){
    if (head == NULL){ //checks if list is empty
        throw invalid_argument("List is empty.");
    }
    Node* ptr = head;
    head = head->next;
    delete ptr;
    if (head == NULL){ //checks again if head is null aka empty list
        tail = NULL;
    }
    num_items--;
}

/** Removes an element from the back of list */
template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back(){
    if (tail == NULL){ //checks if list is empty
        throw invalid_argument("List is empty.");
    }
    if (head == tail){//checks if only 1 element in list
        delete head;
        head = NULL;
        tail = NULL;
    } else{ //2+ elements in list
        Node* current = head;
        while (current->next != tail){//goes thru list to determine what tail will be after pop_back()
            current = current->next;
        }
    delete tail;
    tail = current;
    tail->next = NULL;
    }
    num_items--;
}

/** Returns first element from list
 * @return first element from list
*/
template<typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::front(){
    if (head != NULL){
        return head->data;
    } else{
        throw("List is empty.");
    }
}

/** Returns last element from list
 * @return last element from list
*/
template<typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::back(){
    if (tail != NULL){
        return tail->data;
    } else{
        throw("List is empty.");
    }
}

/** Checks if list is empty
 * @return true if empty, false if not 
*/
template<typename Item_Type>
bool Single_Linked_List<Item_Type>::empty(){
    if (head == NULL && tail == NULL){
        return true; //is empty
    } else {
        return false; //is not empty
    }
}

/** Insert item at position index (starting at 0). 
 * Insert at the end if index is beyond the end of the list
 * @param index position in list
 * @param item item to be inserted
*/
template<typename Item_Type>
void Single_Linked_List<Item_Type>::insert(size_t index, const Item_Type& item){

}

/** Remove the item at position index. 
 * @param index position in list
 * @return true if successful, 
 * @return false if index is beyond the end of the list.
*/
template<typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index){

}

/** Searches for item in list
 * @param item element to be searched for
 * @return the position of the first occurrence of item if it is found, else 
 * @return the size of the list if it is not found
*/
template<typename Item_Type>
size_t Single_Linked_List<Item_Type>::find(const Item_Type& item){

}
