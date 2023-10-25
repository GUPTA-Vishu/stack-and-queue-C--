#include <bits/stdc++.h> 


 void solve(stack<int>&s,int x){
     //base case
     if(s.empty()){
         s.push(x);
         return ;
         
     }
     //r.r
     int element=s.top();
     s.pop();
     solve(s,x);
     s.push(element);
     
     
 }
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;
    
}
