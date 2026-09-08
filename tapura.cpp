#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
    } else {
        top++;
        stack[top] = value;
        cout << value << " pushed\n";
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
    } else {
        cout << stack[top] << " popped\n";
        top--;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Top element: " << stack[top] << "\n";
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();

    display();

    return 0;
}