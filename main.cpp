#include <iostream>
#include "functions.h"

using namespace std;

void displayMenu() {
    cout << "1. Stack Operations\n2. Queue Operations\n3. Exit\nChoose an option: ";
}

void stackMenu(Stack& stack) {
    int choice, value;
    do {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Print Stack\n5. Size\n6. Clear\n7. Back\nChoose: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Value: "; cin >> value; stack.push(value); break;
            case 2: stack.pop(); break;
            case 3: cout << (stack.isEmpty() ? "Stack is empty." : to_string(stack.peek())) << endl; break;
            case 4: stack.printStack(); cout << endl; break;
            case 5: cout << "Size: " << stack.size() << endl; break;
            case 6: stack.clear(); break;
            case 7: break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 7);
}

void queueMenu(Queue& queue) {
    int choice, value;
    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Print Queue\n5. Size\n6. Clear\n7. Back\nChoose: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Value: "; cin >> value; queue.enqueue(value); break;
            case 2: queue.dequeue(); break;
            case 3: cout << (queue.isEmpty() ? "Queue is empty." : to_string(queue.peek())) << endl; break;
            case 4: queue.printQueue(); cout << endl; break;
            case 5: cout << "Size: " << queue.size() << endl; break;
            case 6: queue.clear(); break;
            case 7: break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 7);
}

int main() {
    Stack stack;
    Queue queue;
    int mainChoice;

    do {
        displayMenu();
        cin >> mainChoice;

        switch (mainChoice) {
            case 1: stackMenu(stack); break;
            case 2: queueMenu(queue); break;
            case 3: break;
            default: cout << "Invalid choice.\n";
        }
    } while (mainChoice != 3);

    return 0;
}
