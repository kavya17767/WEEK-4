#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int top, capacity;

public:
    Stack(int size) : capacity(size), top(-1) {
        arr = new int[capacity];
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int val) {
        if (top < capacity - 1)
            arr[++top] = val;
        else
            cout << "Stack overflow\n";
    }

    int pop() {
        if (top >= 0)
            return arr[top--];
        cout << "Stack underflow\n";
        return -1;
    }

    void display() const {
        for (int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack contents: ";
    s.display();

    cout << "Popped: " << s.pop() << endl;
    cout << "Stack after pop: ";
    s.display();

    return 0;
}
