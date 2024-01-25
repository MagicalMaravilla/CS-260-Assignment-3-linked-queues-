// List .cpp

#include "List.h"
#include <stdexcept>

template <typename T>
Queue<T>::Queue() : front(nullptr), rear(nullptr), size(0) {}

template <typename T>
Queue<T>::~Queue() {
    while (!isEmpty()) {
        dequeue();
    }
}

template <typename T>
void Queue<T>::enqueue(T value) {
    Node* newNode = new Node(value);
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    size++;
}

template <typename T>
T Queue<T>::dequeue() {
    if (isEmpty()) {
        throw std::runtime_error("Queue is empty");
    }
    Node* temp = front;
    T value = front->next;
    delete temp;
    if (front == nullptr) {
        rear = nullptr;
    }
    size--;
    return value;
}

template <typename T>
T Queue<T>::peek() const {
    if(isEmpty()) {
        throw std::runtime_error("Queue is empty");
    }
    return front->data;
}

template <typename T>
bool Queue<T>::isEmpty() const {
    return size == 0;
}

template <typename T>
int Queue<T>::getSize() const {
    return size;
}

template class Queue<int>;