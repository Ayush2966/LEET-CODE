class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> arr;
        arr.push_back(0); // Initialize the vector with a single element
        for (int i = 0; i < n; i++) {
            arr.push_back(arr.back() + gain[i]); // Add elements using push_back
        }
        sort(arr.begin(), arr.end());
        return arr.back(); // Return the last element
    }
};
