class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>ans;
        vector<int>temp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        int c;
        for(int i=0;i<mat.size();i++)

        {
            c=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    c++;
                }
                
            }
            minHeap.push({c,i});

        }
        while (!minHeap.empty()&&k>0) {
        pair<int, int> p = minHeap.top();
        ans.push_back(p.second);
        minHeap.pop();
        k--;
    }
    return ans;

      
    }
};
