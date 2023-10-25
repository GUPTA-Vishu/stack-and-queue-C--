bool isValidParenthesis(string expression)
{
  stack<char>s;
  for(int i=0;i<expression.length();i++){
      char ch=expression[i];
      //opening brackets
      if(ch=='(' || ch=='{' || ch=='['){
          s.push(ch);

      }
      else{
          //for closing brackets
          if(!s.empty()){
              char top=s.top();
              if((top=='[' && ch==']')||(top=='{' && ch=='}')||(top=='(' && ch==')')){
                  s.pop();

              }
              else{
                  return false;

              }
          }
          else{
              return false;

          }
      }

  }
  if(s.empty()){
      return true;

  }
  else{
      return false;
      
  }


}