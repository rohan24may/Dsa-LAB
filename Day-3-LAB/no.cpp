#include <iostream>
#include <string>

using namespace std;

class Stack
{
    char* arr;
    int top;
    int size;

public:

    Stack(int size)
    {
        this->size = size;
        arr = new char[size];
        top = -1;
    }

    void push(char ch)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        arr[++top] = ch;
    }

    char pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return '\0';
        }

        return arr[top--];
    }

    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    
    string str;

    cout << "Enter a string: ";
    cin >> str;

    
    Stack stack(str.length());

   
    for (int i = 0; i < str.length(); i++)
    {
        stack.push(str[i]);
    }

    string reversed;


    while (stack.isEmpty() == false)
    {
        char ch = stack.pop();

        reversed = reversed + ch;
    }

    cout << "Reversed String: " << reversed << endl;

    return 0;
}