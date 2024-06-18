class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        vector<pair<int,char>> temp;
        for(auto i:m){
            temp.push_back({i.second,i.first});
        }
        sort(temp.begin(),temp.end(),greater<pair<int,char>>());
        string ans="";
        for(auto &i:temp){
            int n=i.first;
            char c=i.second;
            while(n--){
                ans += c;
            }
        }
        return ans;
    }
};
auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
