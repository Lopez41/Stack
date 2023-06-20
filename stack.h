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
#define MAX 10
using std::cout;
using std::endl;
/*
 * there are no other includes here because they are not needed.
 * if you do need other things included, they would go here
 */

#include "data.h"

class Stack {

public:
    Stack(MAX);
    //deconstructor
    ~Stack();
   
    /* 
     * write all your public method prototypes here
     * this includes you constructor and destructor
     */
    //method to pop data off the stack
    bool pop(Data* data);
    //method to peek at the top of the stack
    bool peek(Data* data);
    //method to push data onto stack
    bool push(int id,string*data);
    //method to check is stack is empty
    bool isempty();
   // get the size of stack
    int getSize():
    
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
