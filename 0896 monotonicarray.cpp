class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        vector<int>temp;
        copy(nums.begin(), nums.end(),back_inserter(temp));
        sort(temp.begin(), temp.end());
        if(nums==temp) return true;
        reverse(temp.begin(), temp.end());
        if(nums==temp) return true;
        return false;
    }
};
