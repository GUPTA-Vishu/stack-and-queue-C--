// Brute force approach  O(n) space complexity
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    stack<int>ss;
    
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           if(s.empty()){
               return -1;
               
           }
            return ss.top();
            
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           if(!s.empty()){
               int res=s.top();
               s.pop();
               if(res==ss.top()){
                   ss.pop();
                   
               }
               return res;
               
           
               
           }
           else return -1;
           
           
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(s.empty() && ss.empty()){
               s.push(x);
               ss.push(x);
               
           }
           else if(x>ss.top()){
               s.push(x);
               
           }
           else if(x<=ss.top()){
               s.push(x);
               ss.push(x);
               
           }
           
           
           
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends