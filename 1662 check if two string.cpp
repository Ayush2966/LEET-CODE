class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string check="";
        string confirm="";
        for(int i=0;i<word1.size();i++){
            check=check+word1[i];
        }
        for(int j=0;j<word2.size();j++){
            confirm=confirm+word2[j];
        }

        return check==confirm;
    }
};
