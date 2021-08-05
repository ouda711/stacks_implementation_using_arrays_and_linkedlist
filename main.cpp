/*
 * Stack Data Structure
 * It is a linear data structure which follows LIFO or FILO
 * push: adds an item in the stack
 * pop: removes item from from the stack
 * peek: returns the top of the stack
 * isEmpty: returns true if the stack is empty else false
 * */
#include <iostream>
#include "LinkedLIstImplementation.h"
using namespace std;

#define MAX 1000

class Stack{
    int top;
public:
    int a[MAX];

    Stack() {top = -1;}
    bool push(int x);
    int pop();
    bool isEmpty();
    int peek();

};

bool Stack::push(int x) {
    if(top >= (MAX-1)){
        cout<<"Stack overflow\n";
        return false;
    }else{
        a[++top] = x;
        cout<<x<<" pushed successfully\n";
        return true;
    }
}

int Stack::pop() {
    if(top < 0){
        cout<<"Stack is empty\n";
        return 0;
    }else{
        int x = a[top--];
        return x;
    }
}

int Stack::peek() {
    if(top < 0){
        cout<<"Stack is empty\n";
        return 0;
    }else{
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty() {
    return (top<0);
}

int main() {
    Stack s;
    s.push(39);
    s.push(34);
    s.push(45);
    s.push(90);
    s.push(102);

    cout<<s.pop()<<" popped from the stack\n";
    cout<<"Elements in the stack are : ";
    while(!s.isEmpty()){
        cout<<s.peek()<<" ";
        s.pop();
    }
    /*
     * ====================================================
     * From the stack implementation using linked list
     * ====================================================
     *
     * */
    LinkedLIstImplementation* root = nullptr;

    LinkedLIstImplementation::push(&root, 10);
    LinkedLIstImplementation::push(&root,20);
    LinkedLIstImplementation::push(&root, 30);

    cout<<LinkedLIstImplementation::pop(&root)<<" popped from the stack\n";
    cout<<"Top element is "<<LinkedLIstImplementation::peek(root)<<endl;
    return 0;
}
