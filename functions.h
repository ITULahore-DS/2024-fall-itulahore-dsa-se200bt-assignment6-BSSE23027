#ifndef INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23027_FUNCTIONS_H
#define INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23027_FUNCTIONS_H
# include <iostream>
using namespace std;
class Node{
    int data;
    Node * next;
public:
    Node();
    ~Node();
    void setNext(Node * val);
    Node * getNext();
    void setData(const int &val);
    int getData() const;
};
class Stack{
    Node * top;
    int count;
public:
    Stack();
    ~Stack();
    bool isEmpty();
    int peek();
    void push( int const & val);
    void pop();
    int size();
    void clear();
    void printStack();
};
class Queue{
    Node * top;
    Node * last;
    int count;
public:
    Queue();
    ~Queue();
    bool isEmpty();
    void enqueue(int data);
    void dequeue();
    int size();
    void printQueue();
};
#endif //INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23027_FUNCTIONS_H
