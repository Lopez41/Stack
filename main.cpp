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
    // here for the rand_string() function
    // if you don't use it, get rid of this
    srand(time(NULL));

    /* ***************************************************************
     * First get your arguments from the command line. Your program must
     * accept one and only one argument not including the program name
     * itself. That argument must be an integer. If anything else is entered
     * in any way, terminate the program with a suitable error message
     * telling the user how to use your program correctly.
     * 
     * Remember, you may not use more than one return, even in main()
     * and you may not use exit() or anything like that.
     * ***************************************************************/
    
    cout<<"/n Testing command line" << endl;
    if (argc != 2) 
    {
        cout << "Please enter a single parameter in the command line representing an integer." << endl;
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

    /* ***************************************************************
     * Use the number passed in from the command line and declare a stack
     * that uses that number as the size of the stack. NOTE: Make sure
     * your stack checks the number passed in to it. You cannot rely
     * on main checking the number first, each part of every program and
     * ADT is always responsible for it's own error checking. Main must
     * check the user gave it an int. The stack must check main()
     * gave it a good number. This is proper error checking, no part of
     * any program can assume it's caller is behaving correctly. To do this,
     * try passing -1 or 0 or some other "bad" number to the stack from
     * main and make sure your stack rejects it, or defaults to some
     * pre-defined default value. This will be tested during grading.
     * ***************************************************************/


    Stack stack1(stackSize);
    cout << "Stack size: " << stack1.getSize() <<endl;

    
    /* ***************************************************************
     * Throughly test your stack. You must perform an exhaustive series
     * of tests on your stack. Show all possible ways your stack can be used
     * and abused and prove that your stack can gracefully handle ALL cases.
     * You must use automated testing (no user input). First cover all
     * explicit cases which you can think of, then execute random operations.
     * When generating test data, use random ints for ids and random short
     * strings for string. There is a string generator made for you in the
     * functions module. You are free to use it or make your own.
     * ***************************************************************/
    
  // PerforM additional error checking or tests on the stack


    // Test Case 2: Push elements into the stack
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

    // Test Case 3: Try pushing into a full stack
    if (stack1.push(6, &info6)== true )
    {
        cout << "error should not have been inserted" << endl;
        return 1;
    }
    
    // Test Case 4: Peek the top element
    Data topData;
    if (stack1.peek(&topData)) 
    {
        cout << "Peeked element: " << topData.id << ", " << topData.information <<endl;
    } else 
    {
        cout << "Stack is empty!" << endl;
    }
     cout << "Popping elements from the stack:" << endl;

    // Test Case 5: Pop elements from the stack
    Data poppedData;
    while (stack1.pop(&poppedData))
     {
        cout << "Popped element: " << poppedData.id << ", " << poppedData.information << endl;
    }

    // Test Case 6: Check if the stack is empty
    if (stack1.isEmpty()== false)
    {    cout << "error: stack is not empty, should be empty. "<< endl;
        return 1;
    }

    // Test Case 7: Create a stack with size 2 (minimum size)
    Stack stack2(2);
    cout << "Stack size: " << stack2.getSize() << endl;
    
    if (stack2.isEmpty()== false)
     {  
         cout << "error is empty should return true into stack "<< endl;
        return 1;
    }
    // Test Case 8: Push an element into the stack
    string info7 = "Data 7";
    stack2.push(7, &info7);

    // Test Case 9: Try pushing another element into a full stack
    string info8 = "Data 8";
    stack2.push(8, &info8);




    /* ***************************************************************
     * Below is some sample code for the random string function. It's
     * only here to demonstrate the function. DELETE it once you study
     * it and understand it and can use it yourself in your code.
     * ***************************************************************/
      std::string strtemp;
    for(int i=0; i<20; i++){
        rand_string(&strtemp);
        std::cout << strtemp << std::endl;
    }
    return 0;
}

    
    // WHEN YOU SUBMIT, DELETE ALL THESE INSTRUCTIONALCOMMENTS
    
    //return 0;

