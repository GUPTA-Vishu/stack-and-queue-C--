void insertAtbottom(stack<int> &s, int x) {
  if (s.empty()) {
    s.push(x);
    return;
  }
  int element = s.top();
  s.pop();
  insertAtbottom(s, x);
  s.push(element);
}

void reverseStack(stack<int> &stack) {
  if (stack.empty()) {
    return;
  }
  int num = stack.top();
  stack.pop();
  reverseStack(stack);
  insertAtbottom(stack, num);
}