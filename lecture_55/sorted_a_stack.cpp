void insertSorted(stack<int> &s, int x)
{
    if (s.empty() || (!s.empty && s.top < x))
    {
        s.push(x);
        return;
    }
    int element = s.top();
    s.pop();
    insertSorted(s, element);
}

void sortStack(stack<int> stack)
{
    if (stack.empty())
    {
        return;
    }
    //
    int num = stack.top();
    stack.pop();
    sortStack(stack);
    insertSorted(s, num);
}
