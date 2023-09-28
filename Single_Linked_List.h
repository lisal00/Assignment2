#ifndef SINGLE_LINKED_LIST
#define SINGLE_LINKED_LIST
#include <stddef.h>
using namespace std;

template<typename Item_Type>
    class Single_Linked_List{
        private:
            #include "Node.h"
            Node* head;
            Node* tail;
            int num_items;
            
        public:
        /** Pushes an element to the front of list 
        */
        void push_front();

        /** Pushes an element to the back of list
        */
        void push_back();

        /** Removes an element from the front of list 
        */
        void pop_front();

        /** Removes an element from the back of list 
        */
        void pop_back();

        /** Returns first element from list
        */
        void front();

        /** Returns last element from list
        */
        void back();

        /** Checks if list is empty
         * @return true if empty, false if not 
        */
        bool empty();

        /** Insert item at position index (starting at 0). 
         * Insert at the end if index is beyond the end of the list
         * @param index position in list
         * @param item idfk
        */
        void insert(size_t index, const Item_Type& item);

        /** Remove the item at position index. 
         * @param index position in list
         * @return true if successful, 
         * return false if index is beyond the end of the list.
        */
        bool remove(size_t index);

        /** Searches for item in list
         * @param item element to be searched for
         * @return the position of the first occurrence of item if it is
        found, else return the size of the list if it is not found
        */
        size_t find(const Item_Type& item);
    };

#endif