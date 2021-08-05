//
// Created by oudaw on 05/08/2021.
//

#include "LinkedLIstImplementation.h"
#include<iostream>
using namespace std;

int LinkedLIstImplementation::isEmpty(LinkedLIstImplementation *root) {
    return !root;
}

LinkedLIstImplementation *LinkedLIstImplementation::newNode(int data) {
    auto* stackNode = new LinkedLIstImplementation();
    stackNode->data = data;
    stackNode->next = nullptr;
    return stackNode;
}

void LinkedLIstImplementation::push(LinkedLIstImplementation **root, int data) {
    auto* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    cout<<data<<" pushed to the stack\n";
}

int LinkedLIstImplementation::pop(LinkedLIstImplementation **root) {
    if(isEmpty(*root)){
        return INT16_MIN;
    }
    LinkedLIstImplementation* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

int LinkedLIstImplementation::peek(LinkedLIstImplementation *root) {
    if(isEmpty(root))
        return INT16_MIN;
    return root->data;
}