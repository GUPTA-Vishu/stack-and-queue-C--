/*You are required to complete this method*/

class Solution{
    vector<int>prev_Smaller(vector<int>&heights){
    vector<int>ans;
    stack<int>s;
    int n=heights.size();
    for(int i=0;i<n;i++){
      while(!s.empty() && heights[s.top()]>=heights[i]){
        s.pop();

      }
      if(s.empty()){
        ans.push_back(-1);

      }
      else{
        int element=(s.top());
        ans.push_back(element);
      }
     
      s.push(i);

    }
    return ans;


  }
  
  vector<int>next_Smaller(vector<int>&heights){
    vector<int>ans;
    stack<int>s;
    int n=heights.size();
    for(int i=n-1;i>=0;i--){
      while(!s.empty()&& heights[s.top()]>=heights[i]){
        s.pop();

      }
      if(s.empty()){
        ans.push_back(n);

      }
      else{
        int element=(s.top());
        ans.push_back(element);
        
      }
      s.push(i);

    }
    reverse(ans.begin(),ans.end());
    return ans;

  }
  
  int MAH(vector<int>& heights) {
        int res=0;
        int n=heights.size();

        vector<int>ns=next_Smaller(heights);
        vector<int>ps=prev_Smaller(heights);
        for(int i=0;i<n;i++){
        int area=(ns[i]-ps[i]-1)*heights[i];
        res=max(res,area);
        }
       
        return res;


    }
  
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        vector<int>ans;
        
        for(int j=0;j<m;j++){
            ans.push_back(M[0][j]);
        }
        int mx=MAH(ans);
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]==0){
                    ans[j]=0;
                    
                }
                else{
                     ans[j]=ans[j]+M[i][j];
                     
                }
            }
            mx=max(mx,MAH(ans));
            
        }
        return mx;
        
    }
};