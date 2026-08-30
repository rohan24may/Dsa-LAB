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


bool isValid(string str)
{
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            count++;
        }
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            count--;
        }
    }

    return count == 0;
}


int main()
{
    string str;

    cout << "Enter the brackets: ";
    cin >> str;
    

    if (isValid(str))
    {
        cout << "Valid Parentheses" << endl;
    }
    else
    {
        cout << "Invalid Parentheses" << endl;
    }

    return 0;
}