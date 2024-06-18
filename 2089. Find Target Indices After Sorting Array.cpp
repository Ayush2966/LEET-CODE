class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==t){
                ans.push_back(i);
            }else{
                if(nums[i]>t){
                    break;
                }
            }
        }
        return ans;
    }
};
