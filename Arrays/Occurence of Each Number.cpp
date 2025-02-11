vector<int> Solution::findOccurences(vector<int> &A) {
    map<int, int> num_freq;
    for(int i:A){
        num_freq[i]++;
    }
    
    vector<int>result;
    for(auto pair:num_freq){
        result.push_back(pair.second);
    }
    
    return result;
}
