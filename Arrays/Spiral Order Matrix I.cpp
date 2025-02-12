vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int i=0, j=0;
    int lr = 0, lc = 0, hr = A.size()-1, hc = A[0].size()-1;
    vector<int> result;
    
    while(i>=lr && i<=hr && j>=lc && j<=hc){
        // L -> R
        for(int c = lc; c<=hc; c++){result.push_back(A[i][c]);}
        lr++; j = hc; i++;
        if(lr>hr) break;
        
        // T -> B
        for(int r = lr; r<=hr; r++){result.push_back(A[r][j]);}
        hc--; i = hr; j--;
        if(lc>hc) break;
        
        // R -> l
        for(int c = hc; c>=lc; c--){result.push_back(A[i][c]);}
        hr--; j = lc; i--;
        
        // B -> T
        for(int r = hr; r>=lr; r--){result.push_back(A[r][j]);}
        lc++; i = lr; j++;
    }
    
    return result;
}
