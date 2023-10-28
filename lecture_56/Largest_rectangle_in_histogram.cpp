class Solution {
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

public:
    int largestRectangleArea(vector<int>& heights) {
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
    

};