class Solution {
public:
    int titleToNumber(string s) {
        if(s.size()==1){
            return int(s[0])-64;
        }else{
            int ans=0;
            int j=1;
            for(int i=s.size()-2;i>=0;i--){
                ans=ans+ (int(s[i])-64)*pow(26,j);
                j++;
            }
             return ans +(int(s[s.size()-1] -64));
        }
       return -1;
    }
};




class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0, n=columnTitle.size(), powerValue=0;
        for(int i=n-1;i>=0;i--){
            // ans+=((columnTitle[i]-'A'+1)* pow(26, powerValue++));
            ans+=((int(columnTitle[i])-64)* pow(26, powerValue++));
        }
        return ans;
    }
};
