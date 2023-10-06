#include "Single_Linked_List.h"
#include <iostream>

using namespace std;

int main(){
    Single_Linked_List<int> list1;
    cout << "Is List 1 empty currently (1 = true, 0 = false)? " << list1.empty() << endl;
    cout << "Adding elements 1, 2, 3, 4 to list 1..." << endl;
    list1.push_front(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    
    cout << endl;
    cout << "\nThe first element of list 1 is: " << list1.front();
    cout << "\nThe last element of list 1 is: " << list1.back();
    
    list1.pop_front();
    cout << "\nCalled pop_front(). The first element of list 1 is now: " << list1.front();
    list1.pop_back();
    cout << "\nCalled pop_back(). The last element of list 1 is now: " << list1.back();
    list1.insert(1, 423);
    cout <<"\nCalled insert() at index 1. The element 423 is at index: "<< list1.find(423);
    
    cout << endl;
    cout << "\nCalled remove() at index 6. Was it successful (1 = true, 0 = false)? " << list1.remove(6);
    cout << "\nThe first element of list 1 is now: " << list1.front();
    cout << "\nThe last element of list 1 is now: " << list1.back(); 
    return 0;
}
