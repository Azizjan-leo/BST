#pragma once
template <typename T>
struct node
{
    T value;
    node<T>* left;
    node<T>* right;
    node(T data)
    {
        value = data;
        left = right = nullptr;
    }
};