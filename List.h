// List.h

#ifndef LIST_H
#define LIST_H

template <typename T>
class Queue {
private:
    // Setting up node structure for Queue
    struct Node {
        T data;
        Node*next;
        Node(T data) : data(data), next(nullptr) {}
    };

    Node* front;  // Pointer to set up the front Queue Pointer
    Node* rear;  // Pointer to the rear side of the queue
    int size;   // Size of queue

public:
Queue();  // Constructor
~Queue(); // Destructor

void enqueue(T value); // Adds value to the back of the queue
T dequeue();           // Removes element from the front and return its value
T peak() const;        // Returns the value at the front without removing it
bool isEmpty() const;  // Checks if the queue is empty
int getSize() const;   // Returns the size of the queue

};

#endif //LIST_H