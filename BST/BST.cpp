#include <string>
#include "OperationResult.h"
#include "BSTIterator.cpp"
#include "node.h"
#include "BST.h"

template<class T>
OperationResult BST<T>::insert(T data)
{
    node<T> newNode = new node<T>(data);

    push(root, newNode);

	return new OperationResult(true, "The elemen has been inserted!");
}

template<class T>
node<T>* push(node<T>* curr, node<T> newNode)
{
    if (curr != nullptr)
    {
        if (curr->value < newNode.value)
            curr->left = push(curr->left, newNode);
        else
            curr->right = push(curr->left, newNode);
    }
    else
        return newNode;
}

template<class T>
OperationResult BST<T>::show(std::ostream& stream)
{
    if (root == nullptr)
        return OperationResult(false, "The tree is empty");
    showRecursive(stream, root);
    return OperationResult(true, "The tree has been printed!");
}

template<class T>
void showRecursive(std::ostream& stream, node<T>*curr) 
{
    if (curr == nullptr)
        return;
    showRecursive(stream, curr->left);
    stream << curr->value;
    showRecursive(stream, curr->right);
}

template<class T>
OperationResult BST<T>::remove(T data)
{
    return OperationResult(false, "Not implemented");
}

template<class T>
OperationResult BST<T>::empty()
{
    return OperationResult(false, "Not implemented");

}

template<class T>
bool BST<T>::isEmpty()
{
	return false;
}

template<class T>
int BST<T>::GetSize()
{
	return 0;
}

template<class T>
node<T> BST<T>::findByData(T data)
{
    return nullptr;
}

template<class T>
BST<T>::BST()
{
}

template<class T>
BST<T>::~BST()
{
}

//template<class T>
//BSTIterator* BST<T>::begin()
//{
//	return nullptr;
//}
//
//template<class T>
//BSTIterator* BST<T>::end()
//{
//	return nullptr;
//}
