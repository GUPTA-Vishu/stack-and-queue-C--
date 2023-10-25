#include <iostream>
#include <stack>

using namespace std;
class Stack
{
    // data members
public:
    int *arr;
    int top;
    int size;
    // behavior
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size-top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0 && top <= size)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
    }
        bool isEmpty()
        {
            if (top == -1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    
};

int
main()
{
    Stack st(5);
    
    st.push(22);
    st.push(21);
    st.push(2);
    st.push(23);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;




    return 0;
}