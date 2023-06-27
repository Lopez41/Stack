/*******************
*coding assignment 05: int stack
*Name: Adrian Lopez
*Date: 06/19/23
*Status:in progress
*Language: C++
*File: main.cpp
**********************/

#include "main.h"

int main(int argc, char **argv) 
{
    srand(time(NULL));

    cout <<"---------------------------------------------------------------"<<endl;
    cout<<"\t\tTesting command line" << endl;
    cout <<"---------------------------------------------------------------"<<endl;
     
    bool failed = false;
    int stackSize = 0;

   
    if (argc != ARC_LENGTH) 
    {   
        cout << "Please enter a single parameter at the command line representing an integer." << endl;
        failed = true;
    }
    else
    {
        try 
        {
        stackSize = std::stoi(argv[1]);
        } 
        catch (...)
        {
        cout << "Error: Stack size must be an integer." <<endl;
        failed = true;
     }
    }
    if (!failed)
    {
  
    
    Stack stack1(stackSize);
    cout << "Stack size: " << stack1.
    getSize() <<endl;
    cout << "---------------------------------------------------------------" << endl;




    // Test Case 1: Push elements into the stack
    string info1 = "Data 1";
    string info2 = "Data 2";
    string info3 = "Data 3";
    string info4 = "Data 4";
    string info5 = "Data 5";
    string info6 = "Data 6";
    string info7 = "Data 7";
    string info8 = "Data 8";
    string info9 = "Data 9";
    string info10 = "Data 10";
    string info11 = "Data 11";

    
    stack1.push(1, &info1);
    stack1.push(2, &info2);
    stack1.push(3, &info3);
    stack1.push(4, &info4);
    stack1.push(5, &info5);
    stack1.push(6, &info6);
    stack1.push(7, &info7);
    stack1.push(8, &info8);
    stack1.push(9, &info9);
    stack1.push(10, &info10);


  

   // Test Case 1: Peek the top element
    Data topData;
    if (stack1.peek(&topData)) 
    {
        cout << "Peeked element: " << topData.id << ", " << topData.information <<endl;
    }
    else 
    {
        cout << "Stack is empty!" << endl;
    }
        cout << "Popping elements from the stack:" << endl;

    // Test Case 2: Pop elements from the stack
    Data poppedData;
    while (stack1.pop(&poppedData))
    {
        cout << "Popped element: " << poppedData.id << ", " << poppedData.information << endl;
    }

    // Test Case 3: Check if the stack is empty
    if (stack1.isEmpty()== false)
    {    
        cout << "error: stack is not empty, should be empty. "<< endl;
    
    }
    else
    {
        cout << "stack is empty"<< endl;
    }
   

    // Test Case 4: test on empty stack

cout << "---------------------------------------------------------------" << endl;
cout << "\tTesting on empty stack " << endl;
cout << "---------------------------------------------------------------" << endl;

    if (stack1.isEmpty()== false)
    {    
     cout << "error: stack is not empty, should be empty. "<< endl;
    
    }
    else
    {
     cout << "stack is empty"<< endl;
    }
Stack stack2(stackSize);
    // Test case: 5 Pushing stack
cout << "---------------------------------------------------------------" << endl;
cout << "\tTesting Pushing in stack"<<endl;
cout << "---------------------------------------------------------------" << endl;

    if (stack2.push(7, &info7))
    {
    cout << "Data pushed to the stack: ID = 7, Info = " << info7 << endl;
    }
    else
    {
    cout << "Error: Failed to push data to the stack." << endl;
    }
//Test case:6 pushing element in full stack
cout << "---------------------------------------------------------------" << endl;
cout << "\tPushing element in full stack"<< endl;
cout <<"---------------------------------------------------------------"<<endl;

    if (stack2.push(8, &info8) == true)
    {
    cout << "Error:failed pushing since stack is full" << endl;
    }
    else
    {
    cout << "Successfully handled pushing into a full stack." << endl;
    }
    //Test:case 7 Testing random
    cout << "\n---------------------------------------------------------------" << endl;
    cout << "\tTesting Random id and string" << endl;
    cout << "---------------------------------------------------------------" << endl;
 //Test for random id and string
 for (int i = 0; i < stackSize; i++)
 {
    int id = rand() % 100;  // Generate random id (0-99)
    string info;
    rand_string(&info);  
    // Display the ID and string
    cout << "Random ID: " << id << endl;
    cout << "Random String: " << info << endl;

    // Test to push the data to the stack
    if (stack1.push(id, &info)) 
        {
            cout << "Data pushed to the stack: ID = " << id << ", Info = " << info << endl;
        } 
    else 
        {
            cout << "Failed to push data to the stack: ID = " << id << ", Info = " << info << endl;
            cout << endl;
        }
        
 }  
 cout << endl;
 
 // test to check if stack is full
 if (stack1.isEmpty())
{
    cout << "Stack is empty." << endl;
}
else
{
    cout << "Stack is not empty." << endl;
}
cout << "---------------------------------------------------------------" << endl;
// Testing to get peek of random id and string
Data peekedData;
if (stack1.peek(&peekedData))
    {
        cout << "Peeked data from the stack: ID = " << peekedData.id << ", Info = " << peekedData.information << endl;
    }
    else
    {
        cout << "Failed to peek data from the stack. The stack is empty." << endl;
    }
    cout << endl;
    
// Test to pop random and string
while (stack1.pop(&poppedData))
{
    cout << "Popped data from the stack: ID = " << poppedData.id << ", Info = " << poppedData.information << endl;
}
// Test to check if empty after pop
if (stack1.isEmpty())
{
    cout << "Stack is empty." << endl;
}
else
{
    cout << "Stack is not empty." << endl;
}

    return failed;

}

}


    
