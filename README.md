A Stack is a linear data structure that follows the LIFO (Last In, First Out)
principle. This means the element inserted last is removed first.

A stack can be implemented using an array. A variable called TOP is used to
keep track of the topmost element of the stack.

Operations of Stack:

1. PUSH:
   Adds a new element to the top of the stack.

2. POP:
   Removes the top element from the stack.

3. PEEK:
   Displays the top element without removing it.

4. DISPLAY:
   Displays all the elements present in the stack.

Stack Overflow:
Overflow occurs when we try to insert an element into a stack that is already full.

Stack Underflow:
Underflow occurs when we try to remove an element from an empty stack.

Time Complexity:

| Operation | Time Complexity |
|-----------|-----------------|
| PUSH      | O(1)            |
| POP       | O(1)            |
| PEEK      | O(1)            |
| DISPLAY   | O(n)            |

Space Complexity: O(n)


Q2. IMPLEMENTATION OF CIRCULAR QUEUE USING ARRAY

Theory:

A Circular Queue is a linear data structure that follows the FIFO
(First In, First Out) principle. In a circular queue, the last position
of the array is connected back to the first position.

A circular queue uses two variables, FRONT and REAR, to keep track of
the first and last elements.

Operations of Circular Queue:

1. ENQUEUE:
   Adds a new element at the rear of the queue.

2. DEQUEUE:
   Removes an element from the front of the queue.

3. FRONT:
   Displays the element present at the front of the queue.

4. DISPLAY:
   Displays all the elements present in the queue.

Advantages of Circular Queue:

A circular queue provides better memory utilization because the empty
spaces created after deletion can be reused. In a linear queue, these
empty spaces may remain unused.

Time Complexity:

| Operation | Time Complexity |
|-----------|-----------------|
| ENQUEUE   | O(1)            |
| DEQUEUE   | O(1)            |
| FRONT     | O(1)            |
| DISPLAY   | O(n)            |

Space Complexity: O(n)