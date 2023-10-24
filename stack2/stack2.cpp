#include <iostream>
using namespace std;

#define MAX_SIZE 100 // حداکثر تعداد عناصر در استک

class Stack {
private:
    int top; // نشانگر بالایی استک
    int arr[MAX_SIZE]; // آرایه‌ای برای نگهداری عناصر استک
public:
    Stack() {
        top = -1; // مقداردهی اولیه برای نشانگر بالایی استک
    }
    bool push(int x) {
        if (top >= MAX_SIZE - 1) {
            cout << "Error: Stack overflow" << endl;
            return false;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
    int pop() {
        if (top < 0) {
            cout << "Error: Stack underflow" << endl;
            return 0;
        }
        int x = arr[top--];
        return x;
    }
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " popped from stack\n";
    cout << s.pop() << " popped from stack\n";
    cout << s.pop() << " popped from stack\n";
    cout << s.pop() << " popped from stack\n";
    return 0;
}