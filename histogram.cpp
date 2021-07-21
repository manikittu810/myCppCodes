int Solution::largestRectangleArea(vector<int> &A) {
    if(A.size()==0)
        return 0;
    if(A.size()==1)
        return A[0];
    stack<int> s;
    vector<int> util;
    for(int i=0;i<A.size();i++){
        if(s.size()==0){
            util.push_back(i+1);
        }
        else if(A[i]>A[s.top()]){
            util.push_back(i-s.top());
        }
        else{
            while(!s.empty() && A[i]<=A[s.top()]){
                s.pop();
            }
            if(s.empty()){
                util.push_back(i+1);
            }
            else{
                util.push_back(i-s.top());
            }
        }
        s.push(i);
    }
    while(!s.empty())
        s.pop();
    int n = A.size();
    for(int i=A.size()-1;i>=0;i--){
        if(s.empty()){
            util[i]+=n-1-i;
        }
        else if(A[i]>A[s.top()]){
            util[i]+=s.top()-i-1;
        }
        else{
            while(!s.empty() && A[i]<=A[s.top()])
                s.pop();
            if(s.empty()){
                util[i]+=n-1-i;
            }
            else{
                util[i]+=s.top()-i-1;
            }
        }
        s.push(i);
    }
    int ans = INT_MIN;
    for(int i=0;i<util.size();i++){
        if(util[i]*A[i]>ans)
            ans = util[i]*A[i];
    }
    return ans;
}

