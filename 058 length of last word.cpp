class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int count=0, flag=0;
        for(int i=n-1; i>=0; i--){
            if(s[i]== ' '&& flag==1){
                break;
            }
            else if (s[i]!=' '){
                count++;
                flag=1;
            }
        }
        return count;
    }
};
