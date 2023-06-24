/*******************
*coding assignment 05: int stack
*Name: Adrian Lopez
*Date: 06/19/23
*Status:in progress
*Language: C++
*File: stack.cpp
*******************/
// each cpp includes ONLY it's header directly
#include "stack.h"

/*
 * write all your stack methods here
 */
 Stack::Stack(int stackSize)
 {
    
    if (stackSize < 2)
    {
        size = 10;
    }
    else
    {
    size = stackSize;

    stack = new Data*[size];
    top = -1;
    }
 }

 Stack::~Stack()
 {
 
}

 bool Stack::push(int id,string* info)
{ 
    bool inserted = false;

        if (top + 1 < size && id > 0 && !info->empty()) 
        {
            Data* newData = new Data;  // Dynamically create a new Data struct
            newData->id = id;
            newData->information = *info;

            top++;
            stack[top] = newData;

            inserted = true;
        }

        return inserted;
}// bool Stack::push(int id,string*data)


// function to remove data from the top of the stack
bool Stack::pop(Data* poppedData) 
{   
  bool remove = false;

        if (top >= 0) {
            poppedData = stack[top];  // Copy data from the top of the stack
            delete stack[top];  // Deallocate memory for the top Data struct
            top--;

            remove = true;
        } else {
            poppedData->id = -1;
            poppedData->information = "";
        }

        return remove;
    
}// end of int Stack:: pop(Dta *data)


// function to check if stack is empty
bool Stack::isEmpty()
{ 
    return (top == -1);
    
}// end of bool Stack::isEmpty()

int Stack::getSize()
{
    return(size);
}// end of getSize()

bool Stack::peek(Data* )
{
 
}//end of int Stack::peek(Data* data)






