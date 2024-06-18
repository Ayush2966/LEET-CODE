class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> mpp;
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        int rank = 1;
        for (int num : temp) {
            if (mpp.count(num) == 0) {
                mpp[num] = rank++;
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = mpp[arr[i]];
        }
        return arr;
    }
};
auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
