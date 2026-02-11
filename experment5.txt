#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int cap;

public:
    
    Stack(int size) {
        cap = size;
        arr = new int[cap];
        top = -1;
    }

    
    ~Stack() {
        delete[] arr;
    }

   
    void push(int value) {
        if (top == cap - 1) {
            cout << "[Error] Stack Overflow " << value << endl;
        } else {
            arr[++top] = value;
            cout << "\n[Success] " << value << " pushed into stack." << endl;
        }
    }

    
    void pop() {
        if (top == -1) {
            cout << "\n[Error] Stack Underflow ." << endl;
        } else {
            cout << "\n[Success] Popped value: " << arr[top--] << endl;
        }
    }

    
    void peep() {
        if (top == -1) {
            cout << "\n[Message] Stack is empty." << endl;
        } else {
            cout << "\n[Top Element] is: " << arr[top] << endl;
        }
    }

   
    void display() {
        if (top == -1) {
            cout << "\n[Message] Stack is empty!" << endl;
        } else {
            cout << "\n--- Current Stack (Top to Bottom) ---" << endl;
            for (int i = top; i >= 0; i--) {
                cout << "| " << arr[i] << " |" << endl;
            }
            cout << "-------" << endl;
        }
    }
};

int main() {
    int size, choice, val;

    cout << "Enter the capacity of your stack: ";
    cin >> size;
    Stack s(size);

    do {
        cout << " Stack Operations Menu ";
        cout << "\n1. Push\n2. Pop\n3. Peep\n4. Display\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                s.push(val);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peep();
                break;
            case 4:
                s.display();
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice " << endl;
        }
    } while (choice != 5);

    return 0;
}
