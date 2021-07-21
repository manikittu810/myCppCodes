
int Solution::minimumTotal(vector<vector<int> > &A) {
   if(A.size()==0)
    return 0;
    if(A.size()==1)
        return A[0][0];
    for(int i=1;i<A.size();i++){
        for(int j=0;j<A[i].size();j++){
            int curr = INT_MAX;
            if(j-1>=0){
                curr = min(A[i-1][j-1],curr);
            }
            if(j<A[i-1].size()){
                curr = min(A[i-1][j],curr);
            }
            A[i][j]+=curr;
        }
    }
    sort(A[A.size()-1].begin(),A[A.size()-1].end());
    return A[A.size()-1][0];
}




