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

  
    
    cout<<"/n Testing command line" << endl;
    if (argc != 2) 
    {
        cout << "Please enter a single parameter at the command line representing an integer." << endl;
        return 1;
    }

 int stackSize = 0;
    try {
        stackSize = std::stoi(argv[1]);
    } catch (...)
     {
        cout << "Error: Stack size must be an integer." <<endl;
        return 1;
    }




    Stack stack1(stackSize);
    cout << "Stack size: " << stack1.getSize() <<endl;




    // Test Case 1: Push elements into the stack
    string info1 = "Data 1";
    string info2 = "Data 2";
    string info3 = "Data 3";
    string info4 = "Data 4";
    string info5 = "Data 5";
    string info6 = "Data 6";
    

    stack1.push(1, &info1);
    stack1.push(2, &info2);
    stack1.push(3, &info3);
    stack1.push(4, &info4);
    stack1.push(5, &info5);

    // Test Case 2: Try pushing into a full stack
    if (stack1.push(6, &info6)== true )
    {
        cout << "error should not have been inserted" << endl;
        return 1;
    }
    
    // Test Case 3: Peek the top element
    Data topData;
    if (stack1.peek(&topData)) 
    {
        cout << "Peeked element: " << topData.id << ", " << topData.information <<endl;
    } else 
    {
        cout << "Stack is empty!" << endl;
    }
     cout << "Popping elements from the stack:" << endl;

    // Test Case 4: Pop elements from the stack
    Data poppedData;
    while (stack1.pop(&poppedData))
     {
        cout << "Popped element: " << poppedData.id << ", " << poppedData.information << endl;
    }

    // Test Case 5: Check if the stack is empty
    if (stack1.isEmpty()== false)
    {    cout << "error: stack is not empty, should be empty. "<< endl;
        return 1;
    }

    // Test Case 6: Create a stack with size 2 (minimum size)
    Stack stack2(2);
    cout << "Stack size: " << stack2.getSize() << endl;
    
    if (stack2.isEmpty()== false)
     {  
         cout << "error is empty should return true into stack "<< endl;
        return 1;
    }
    // Test Case 7: Push an element into the stack
    string info7 = "Data 7";
    stack2.push(7, &info7);

    // Test Case 8: Try pushing another element into a full stack
    string info8 = "Data 8";
    stack2.push(8, &info8);


    cout << "\n--------------------------------"<< endl;
    cout << "Testing Random id and string" << endl;
    cout << "---------------------------------" << endl;

      for (int i = 0; i < stackSize; i++) 
      {
        int id = rand() % 100;  // Generate random id (0-99)
        string info;
        rand_string(&info);  
    // Display the ID and string
    cout << "Random ID: " << id << endl;
    cout << "Random String: " << info << endl;

    // Push the data to the stack
    if (stack1.push(id, &info)) 
    {
        cout << "Data pushed to the stack: ID = " << id << ", Info = " << info << endl;
    } else 
    {
        cout << "Failed to push data to the stack: ID = " << id << ", Info = " << info << endl;
        return 1;
    }
      

    }
    return 0;
}
    
