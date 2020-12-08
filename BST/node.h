#pragma once
template <typename T>
struct node
{
    T value;
    node* left, right;
    node(T data)
    {
        value = data;
        left = right = nullptr;
    }
};