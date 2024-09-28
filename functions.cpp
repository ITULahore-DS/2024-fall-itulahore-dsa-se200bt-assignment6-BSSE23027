#include "functions.h"
Node::Node(){
    data = 0;
    next = nullptr;
}
Node::~Node(){
    data = 0;
}
void Node::setNext(Node * val){
    next = val;
}
Node * Node::getNext(){
    return next;
}
void Node::setData(const int &val){
    data = val;
}

int Node::getData() const{
    return data;
}

Stack::Stack() {
    top = nullptr;
    count = 0;
}

Stack::~Stack() {
    if(top != nullptr){
        Node *temp = top;
        while (temp != NULL) {
            top = top->getNext();
            delete temp;
            temp = top;
        }
    }
}

bool Stack::isEmpty() {
    if(count == 0 && top == nullptr){
        return true;
    }
    return false;
}


int Stack::peek() {
    if(count != 0 && top != nullptr){
        return top->getData();
    }
    return -1;
}

void Stack::push(const int &val) {
    if (top == NULL && count == 0) {
        top = new Node();
        top->setData(val);
        ++count;
    } else {
        Node *temp = new Node();
        temp->setNext(&*top);
        temp->setData(val);
        top = &(*temp);
        ++count;
    }
}

void Stack::pop() {
    if(count != 0 && top != nullptr){
        Node *temp = top->getNext();
        delete top;
        top = &(*temp);
        temp = nullptr;
        --count;
    }else{
        top = nullptr;
    }
}

int Stack::size() {
    return count;
}

void Stack::clear() {
    if(top != nullptr){
        Node *temp = top;
        while (temp != NULL) {
            top = top->getNext();
            delete temp;
            temp = top;
        }
        top = nullptr;
        count = 0;
    }
    else{
        cout<<"Queue already empty"<<endl;
    }
}

void Stack::printStack() {
    Node * temp = top;
    while(temp != nullptr){
        cout<<temp->getData()<<" ";
        temp = temp->getNext();
    }
}

Queue::Queue() {
    top = nullptr;
    last = nullptr;
    count = 0;
}

Queue::~Queue() {
    if(top != nullptr){
        Node *temp = top;
        while (temp != NULL) {
            top = top->getNext();
            delete temp;
            temp = top;
        }
    }
}

bool Queue::isEmpty() {
    if(top == nullptr && count == 0 && last == nullptr){
        return true;
    }
    return false;
}

void Queue::enqueue(int data) {
    if (top == NULL && count == 0) {
        top = new Node();
        top->setData(data);
        last = top;
    } else {
        Node *temp = new Node();
        last->setNext(temp);
        last->getNext()->setData(data);
        last = &(*last->getNext());
    }
    ++count;
}

void Queue::dequeue() {
    if(count != 0 && top != nullptr){
        Node *temp = top->getNext();
        delete top;
        top = &(*temp);
        temp = nullptr;
        --count;
    }else{
        top = nullptr;
    }
}

int Queue::size() {
    return count;
}

void Queue::printQueue() {
    Node * temp = top;
    while(temp != nullptr){
        cout<<temp->getData()<<" ";
        temp = temp->getNext();
    }
}
