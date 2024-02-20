# Queue

This repository contains a C++ class named `Queue` that implements a queue data structure along with various functions for queue manipulation and operations.

## Queue Class Functions

1. **Constructor:**
   - Initializes the queue with a specified size. Default size is 10.

2. **inQueue:**
   - Enqueues an element into the rear of the queue.

3. **deQueue:**
   - Dequeues an element from the front of the queue.

4. **isEmpty:**
   - Checks if the queue is empty.

5. **isFull:**
   - Checks if the queue is full.

6. **peek:**
   - Returns the element at the rear of the queue without removing it.

7. **display:**
   - Displays all the elements in the queue.

8. **reSize:**
   - Resizes the queue when it becomes full.

## Example Usage

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Example usage of Queue class functions
    Queue<int> q1(5);
    q1.inQueue(12);
    q1.inQueue(23);
    q1.inQueue(34);
    q1.inQueue(56);
    q1.inQueue(76);
    q1.inQueue(7);
    q1.inQueue(0);
    q1.display();
    q1.deQueue();
    q1.deQueue();
    q1.deQueue();
    q1.deQueue();
    q1.deQueue();
    q1.display();

    return 0;
}
