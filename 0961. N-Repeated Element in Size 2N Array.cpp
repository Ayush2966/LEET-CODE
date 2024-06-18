class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mymap;
        int n = nums.size() / 2;
        for(int i: nums){
            mymap[i]++;
            if(mymap[i] > 1) return i;
        } 
        return 0;
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
