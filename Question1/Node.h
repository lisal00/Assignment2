#ifndef NODE_H_
#define NODE_H_

template<typename IT>
struct Node {
    IT data;
    Node* next;
    
    /**constructor*/
    Node(const IT& data_item, Node* next_ptr = NULL) :
    data(data_item), next(next_ptr) {}
};

#endif
