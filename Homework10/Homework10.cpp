// --------------------------------------------------------------------------------
// Author: Aymar OLATOUNDE
// Assigment 10

// --------------------------------------------------------------------------------
// Pre-compiler Directives
// --------------------------------------------------------------------------------

#include <iostream>
#include "CQueue.h"
#include "CStack.h"

int main()
{

    // CQueue TEST
    std::cout << "\n\n### CQueue TEST" << std::endl;
    CQueue queue;

    // Enqueue some values
    queue.Push(10);
    queue.Push(20);
    queue.Push(30);

    // Print the queue
    std::cout << "\nQueue after enqueuing:" << std::endl;
    queue.Print();

    // Dequeue and print
    int dequeuedValue = queue.Pop();
    std::cout << "\nDequeued value: " << dequeuedValue << std::endl;

    // Print the queue after dequeue
    std::cout << "\nQueue after dequeuing:" << std::endl;
    queue.Print();

    // Enqueue more values
    queue.Push(40);
    queue.Push(50);

    // Print the queue after enqueuing more values
    std::cout << "\nQueue after enqueuing more values:" << std::endl;
    queue.Print();

    // Dequeue all elements
    while (!queue.IsEmpty()) {
        int value = queue.Pop();
        std::cout << "Dequeued value: " << value << std::endl;
    }

    // Print the queue after dequeuing all elements
    std::cout << "\nQueue after dequeuing all elements:" << std::endl;
    queue.Print();


    // CStack TEST
    std::cout << "\n\n### CStack TEST" << std::endl;
    CStack stack;

    // Push some values onto the stack
    stack.Push(10);
    stack.Push(20);
    stack.Push(30);

    // Print the stack
    std::cout << "\nStack after pushing values:" << std::endl;
    stack.Print();

    // Pop and print
    int poppedValue = stack.Pop();
    std::cout << "\Popped value: " << poppedValue << std::endl;

    // Print the stack after destack
    std::cout << "\nstack after popped:" << std::endl;
    stack.Print();

    // Push more values
    stack.Push(40);
    stack.Push(50);

    // Print the stack after push more values
    std::cout << "\nstack after push more values:" << std::endl;
    stack.Print();

    // Pop and print the values
    std::cout << "\nPopped values:" << std::endl;
    while (!stack.IsEmpty()) {
        int poppedValue = stack.Pop();
        std::cout << "Popped: " << poppedValue << std::endl;
    }

    // Print the stack after popping
    std::cout << "\nStack after popping values:" << std::endl;
    stack.Print();
}
