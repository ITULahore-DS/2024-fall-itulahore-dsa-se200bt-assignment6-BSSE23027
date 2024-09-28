#include "functions.h"
void stackMenu(Stack &stack) {
    int choice, val;
    do {
        cout <<endl<< "--- Stack Menu ---"<<endl;
        cout << "1. Push"<<endl;
        cout <<"2. Pop"<<endl;
        cout <<"3. Display top"<<endl;
        cout <<"4. Print Stack"<<endl;
        cout <<"5. Clear Stack"<<endl;
        cout << "6. Get Stack Size"<<endl;
        cout <<"7. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                stack.push(val);
                break;
            case 2:
                if (!stack.isEmpty()) {
                    stack.pop() ;
                } else {
                    cout << "Stack is empty!" << endl;
                }
                break;
            case 3:
                if (!stack.isEmpty()) {
                    cout << "Top of stack: " << stack.peek() << endl;
                } else {
                    cout << "Stack is empty!" << endl;
                }
                break;
            case 4:
                stack.printStack();
                break;
            case 5:
                stack.clear();
                cout << "Stack cleared!" << endl;
                break;
            case 6:
                cout << "Stack size: " << stack.size() << endl;
                break;
            case 7:
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 7);
}

void queueMenu(Queue &queue) {
    int choice, val;
    do {
        cout <<endl<< "--- Queue Menu ---"<<endl;
        cout << "1. Enqueue"<<endl;
        cout <<"2. Dequeue"<<endl;
        cout <<"3. Display Queue"<<endl;
        cout <<"4. Get Queue Size"<<endl;
        cout <<"5. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> val;
                queue.enqueue(val);
                break;
            case 2:
                if (!queue.isEmpty()) {
                    queue.dequeue();
                    cout << "Dequeued element." << endl;
                } else {
                    cout << "Queue is empty!" << endl;
                }
                break;
            case 3:
                queue.printQueue();
                break;
            case 4:
                cout << "Queue size: " << queue.size() << endl;
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);
}

int main() {
    Stack stack;
    Queue queue;
    int choice;
    do {
        cout << endl << "--- Main Menu ---"<<endl;
        cout << "1. Stack Operations"<<endl;
        cout << "2. Queue Operations"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                stackMenu(stack);
                break;
            case 2:
                queueMenu(queue);
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}