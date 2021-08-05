//
// Created by oudaw on 05/08/2021.
//

#ifndef STACKS_LINKEDLISTIMPLEMENTATION_H
#define STACKS_LINKEDLISTIMPLEMENTATION_H


class LinkedLIstImplementation {
public:
    int data;
    LinkedLIstImplementation* next;
    static int isEmpty(LinkedLIstImplementation* root);
    static LinkedLIstImplementation* newNode(int data);
    static void push(LinkedLIstImplementation** root, int data);
    static int pop(LinkedLIstImplementation** root);
    static int peek(LinkedLIstImplementation* root);
};


#endif //STACKS_LINKEDLISTIMPLEMENTATION_H
