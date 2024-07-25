/* 


string reverseParentheses(string s) {
    string ans="";
    stack<char> stk;
    for(char i:s){
        if(i!=')'){
            stk.push(i);
        }
        else{
            string out="";
            while(!stk.empty() && stk.top()!='('){
                out+=stk.top();
                stk.pop();
            }
            stk.pop();
            for(char j:out){
                stk.push(j);
            }
        }
    }
    while(!stk.empty()){
        ans=stk.top()+ans;
        stk.pop();
    }
    return ans;
 
 
*/