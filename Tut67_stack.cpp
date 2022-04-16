#include <iostream>
#include <stack>
#define n 100
using namespace std;

class stacks
{
public:
    int *arr;
    int top;

    stacks()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int val)
    {
        if (top == n - 1)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        top--;
    }

    int tops()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }

    void display()
    {
        int tops = top;
        while (tops != -1)
        {
            cout << arr[tops] << " ";
            tops--;
        }
        cout << endl;
    }
};

int main()
{
    stacks st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.display();

    st.pop();
    st.pop();
    st.pop();
    st.display();
}