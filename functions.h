//
// Created by umar on 9/28/2024.
//

#ifndef INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_23063_FUNCTIONS_H
#define INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_23063_FUNCTIONS_H

#include <iostream>

using namespace std;

class Node {
        public:
        int data;
        Node* next;

        Node() {
            data = 0;
            next = nullptr;
        }

        void setNext(Node* val) {
            next = val;
        }

        Node* getNext() {
            return next;
        }

        void setData(int d) {
            data = d;
        }

        int getData() {
            return data;
        }
};

class Stack{
public:
    Node* top;
    int count;
    Stack(){
       top= nullptr;
       count=0;
    }
    bool isEmpty(){

        if (top== nullptr) {
            return true;
        }
            return false;

    }

    void push(int data){
        Node * temp=new Node();
        temp->setData(data);
        temp->setNext(top);
        top=temp;
        count++;

    }

    int peek(){
        if(isEmpty()){
            return -1;
        }
        return top->getData();
    }

    void pop() {
        if (isEmpty()) {
            return;
        }
        Node* temp = top;
        top = top->getNext();
        delete temp;
        count--;
    }
    int size(){
        return count;
    }
    void clear(){
        count=0;
        top= nullptr;
    }

    void printStack(){
        while (top!= nullptr){
            cout<<top->getData()<<" ";
            top=top->getNext();
        }
    }

};


class Queue {
public:
    Node* rear;
    Node* front;
    int count;

    Queue() {
        front = nullptr;
        rear = nullptr;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    void enqueue(int data) {
        Node* temp = new Node();
        temp->setData(data);
        if (count == 0) {
            front = rear = temp;
        } else {
            rear->setNext(temp);
            rear = temp;
        }
        count++;
    }

    int peek() {
        if (isEmpty()) {
            return -1;
        }
        return front->getData();
    }

    void dequeue() {
        if (isEmpty()) {
            return;
        }
        Node* temp = front;
        front = front->getNext();
        delete temp;
        count--;

        if (front == nullptr) {
            rear = nullptr;
        }
    }

    int size() {
        return count;
    }

    void clear() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    void printQueue() {
        Node* current = front;
        while (current != nullptr) {
            cout << current->getData() << " ";
            current = current->getNext();
        }
        cout << endl;
    }
};






#endif //INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_23063_FUNCTIONS_H
