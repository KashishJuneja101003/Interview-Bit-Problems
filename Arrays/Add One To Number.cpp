vector<int> Solution::plusOne(vector<int> &A) {
    int carry = 1;
    vector<int> result;
    
    for(int i=A.size()-1; i>=0; i--){
        int sum = A[i] + carry;
        carry = sum/10;
        
        result.push_back(sum%10);
    }
    
    if(carry == 1){
        result.push_back(1);
    }
    
    
    int idx = result.size()-1;
    while(result[idx] == 0){
        result.pop_back();
        idx--;
    }
    
    reverse(result.begin(), result.end());
    
    
    return result;
}
