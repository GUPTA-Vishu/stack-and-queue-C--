//Brute force Approach
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        for(int i=0;i<n;i++){
                bool isCeleb=true;
            for(int col=0;col<n;col++){
                if(M[i][col]==1){
                    isCeleb=false;
                    break;
                    
                }
            }
            if(isCeleb==true){
                for(int row=0;row<n;row++){
                    if(row==i){
                        continue;
                        
                    }
                    if(M[row][i]==0){
                        isCeleb=false;
                        
                        
                    }
                }
            }
            if(isCeleb==true){
                return i;
                
            }
           
            
           
            
        }
        return -1;
        
        
        
    }
};

//optimised version of celebrity problem with O(n)
  public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
    stack<int>s;
    for(int i=0;i<n;i++){
        s.push(i);
    }
    
     
     while(s.size()>1){
          int a=s.top();
          s.pop();
    
           int b=s.top();
           s.pop();
         
         
         if(knows(M,n,a,b)){
             s.push(b);
             
         }
         else {
             s.push(a);
             
         }
     }
    int ans=s.top();
    int ZeroCount=0;
    
    for(int i=0;i<n;i++){
        
        if(M[ans][i]==0){
            ZeroCount++;
            
        }
    }
    int OneCount=0;
    for(int i=0;i<n;i++){
        if(M[i][ans]==1){
            OneCount++;
            
        }
    }
    
    if(ZeroCount!=n){
        return -1;
        
        
    }
    if(OneCount!=n-1){
        return -1;
        
    }
    
    
    return ans;
    
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}