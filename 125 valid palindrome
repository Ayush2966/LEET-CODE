class Solution {
public:
    bool check(string temp){
        int i=0;
        int j=temp.size()-1;
        while(i<j){
            if(temp[i++]!=temp[j--]){
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0,j=0; i<s.size();i++){
            if(isalnum(s[i])){
                temp+=tolower(s[i]);
                
            }
        }
        return check(temp);

    }
};
