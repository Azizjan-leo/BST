#pragma once
#include <string>
#include "OperationResult.h"
#include "node.h"

template <class T>
class BST 
{
private:
    node<T>* root;
public:
    /* declaration of a member function Insert */
    OperationResult insert(T data);
    OperationResult show(std::ostream& stream);
    OperationResult remove(T data);
    OperationResult empty();
    bool isEmpty();
    int GetSize();
    node<T> findByData(T data);
    BST();
    ~BST();
    // For iterations
   /* BSTIterator* begin();
    BSTIterator* end();*/
};

