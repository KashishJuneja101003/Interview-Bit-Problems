string Solution::reverseString(string A) {
    stack<char>stk;
    for(char c:A){
        stk.push(c);
    }
    
    string newS = "";
    while(!stk.empty()){
        newS += stk.top();
        stk.pop();
    }
    
    return newS;
}
