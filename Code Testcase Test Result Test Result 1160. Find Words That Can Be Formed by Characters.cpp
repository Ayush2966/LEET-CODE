class Solution {
public:
    bool canForm(string word, vector<int> count)
    {
        vector<int> c(26, 0);
        for (int i = 0; i < word.length(); i++)
        {
            int k = word[i] - 'a';
            c[k]++;
            if (c[k] > count[k]) return false;
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        vector<int> count(26, 0);
        for (int i = 0; i < chars.length(); i++)
        {
            count[chars[i] - 'a']++;
        }
        
        int res = 0;
        for (int i = 0; i < words.size(); i++)
        {
            if (canForm(words[i], count)) res += words[i].length();
        }
        return res;
    }
};
auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
