/*******************
*coding assignment 05: int stack
*Name: Adrian Lopez
*Date: 06/19/23
*Status:in progress
*Language: C++
*File: stack.h
*******************/
#ifndef STACK_H
#define STACK_H
#define DEFAULT_MAX 10
#define MIN_STACK 2
#include "data.h"
#include <iostream>
#include <stdexcept>

/*
 * there are no other includes here because they are not needed.
 * if you do need other things included, they would go here
 */
class Stack 
{

public:
   /* 
     * write all your public method prototypes here
     * this includes you constructor and destructor
     */
    Stack(int);
    //deconstructor
    ~Stack();
    //method to pop data off the stack
    bool pop(Data*);
    //method to peek at the top of the stack
    bool peek(Data*);
    //method to push data onto stack
    bool push(int,string*);
    //method to check is stack is empty
    bool isEmpty();
   // get the size of stack
    int getSize();
    
private:

    /* 
     * write all your private method prototypes here
     */

    // these are the only attributes you need.
    // do not modify them or add any other attributes
    int top;
    int size;
    Data **stack;
    // notice stack is a pointer to a pointer. That means if you do
    // a single array allocation, you will get an array of pointers
};

#endif //STACK_H
