#include "Single_Linked_List.h"
#include <stddef.h>
#include <stdexcept>
using namespace std;

/**Constructor*/
template<typename Item_Type>
Single_Linked_List<Item_Type>::Single_Linked_List(){
    head = NULL;
    tail = NULL;
    num_items = 0;
}

/** Destructor*/
template<typename Item_Type>
Single_Linked_List<Item_Type>::~Single_Linked_List() {
    while (head != NULL) {
        Node<Item_Type>* current = head;
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
        throw invalid_argument ("List is empty.");
    }
    Node<Item_Type>* ptr = head;
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
        throw invalid_argument ("List is empty.");
    }
    if (head == tail){//checks if only 1 element in list
        delete head;
        head = NULL;
        tail = NULL;
    } else{ //2+ elements in list
        Node<Item_Type>* current = head;
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
        throw invalid_argument("List is empty.");
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
        throw invalid_argument("List is empty.");
    }
}

/** Checks if list is empty
 * @return true if empty, false if not 
*/
template<typename Item_Type>
bool Single_Linked_List<Item_Type>::empty(){
    if (head == NULL && tail == NULL && num_items == 0){
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
    Node<Item_Type>* item_node = new Node(item); //create item node
    if (index == 0 || head == NULL){ //index is 0 or list is empty
        push_front(item);
        return;
    }
    if (index >= num_items){//index is out of bounds
        push_back(item);
    } else {//regular case
        Node<Item_Type>* current = head;
        for (int i = 0; i < index-1; i++){
            current = current->next;
        }
        item_node->next = current->next;
        current->next = item_node;
        num_items++;
    }
}

/** Remove the item at position index. 
 * @param index position in list
 * @return true if successful, 
 * @return false if index is beyond the end of the list.
*/
template<typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index){
    if (index == 0){
        pop_front();
        return true;
    }
    if (index == (num_items-1)){ //if index is end of list
        pop_back();
        return true;
    }
    if (head != NULL && index < num_items){//checks if list is not empty and index in bounds
        Node<Item_Type>* current = head;
        for (int i = 0; i < index-1; i++){
            current = current->next;
        }
        Node<Item_Type>* delete_node = current->next;
        current->next = delete_node->next;
        delete delete_node;
        num_items--;

        return true;
    } else{
        return false;
    }
}

/** Searches for item in list
 * @param item element to be searched for
 * @return the position of the first occurrence of item if it is found, else 
 * @return the size of the list if it is not found
*/
template<typename Item_Type>
size_t Single_Linked_List<Item_Type>::find(const Item_Type& item){
    Node<Item_Type>* current = head;
    size_t index = 0;
    while (current != NULL){
        if (item == current->data){
            return index;
        }
        current = current->next;
        index++;
    }
    return num_items;
}
