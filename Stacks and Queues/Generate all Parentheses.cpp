int Solution::isValid(string A) {
    stack<char> stk;
    for(char c:A){
        if(c == '(' || c == '{' || c == '['){
            stk.push(c);
        } else{
            if(stk.empty()){
                return 0;
            }
            
            if(c == ')' && stk.top() == '('){
                stk.pop(); 
                continue;
            }
            
            if(c == ']' && stk.top() == '['){
                stk.pop();
                continue;
            } 
            
            if(c == '}' && stk.top() == '{'){
                stk.pop();
                continue;
            } 
            return 0;
        }
    }
    
    return stk.empty() ? 1 : 0;

}
