class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n= rowIndex+1;
        int64_t ans=1;
        vector<int> ansRow;
        ansRow.push_back(ans);
        for(int i=1; i<n;i++){
            ans*= (n-i);
            ans= ans/i;
            ansRow.push_back(ans);            
        }
        return ansRow;
    }
};
