class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged="";
        int i;
        while(i<word1.size() && i<word2.size()){
            merged.push_back(word1[i]);
            merged.push_back(word2[i]);
            i++;
        }
         while(i<word1.size()){
            merged.push_back(word1[i]);           
            i++;
        }
         while(i<word2.size()){
            merged.push_back(word2[i]);
            i++;
        }
        return (merged);
    }
};
