int Solution::solve(string A) {
    stack<char> stk;
    for(char c:A){
        if(c == '('){
            stk.push(c);
        } else{
            if(stk.empty()){
                return 0;
            } else{
                stk.pop();
            }
        }
    }
    
    return stk.empty() ? 1 : 0;
}
