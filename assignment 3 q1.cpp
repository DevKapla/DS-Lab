#include <iostream>
using namespace std;

int stackArr[100];
int top = -1;

void push(int value) {
    if (top == 99) {
        cout << "Stack is full\n";
    } else {
        top++;
        stackArr[top] = value;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Popped: " << stackArr[top] << "\n";
        top--;
    }
}

void isEmpty() {
    if (top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";
}

void isFull() {
    if (top == 99)
        cout << "Stack is full\n";
    else
        cout << "Stack is not full\n";
}

void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        for (int i = top; i >= 0; i--) {
            cout << stackArr[i] << " ";
        }
        cout << "\n";
    }
}

void peek() {
    if (top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Top element: " << stackArr[top] << "\n";
}

int main() {
    int choice, value;
    while (true) {
        cout << "1.Push 2.Pop 3.isEmpty 4.isFull 5.Display 6.Peek 7.Exit\n";
        cin >> choice;
        if (choice == 1) {
            cin >> value;
            push(value);
        } else if (choice == 2) {
            pop();
        } else if (choice == 3) {
            isEmpty();
        } else if (choice == 4) {
            isFull();
        } else if (choice == 5) {
            display();
        } else if (choice == 6) {
            peek();
        } else if (choice == 7) {
            break;
        } else {
            cout << "Invalid choice\n";
        }
    }
    return 0;
}
