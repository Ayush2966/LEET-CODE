class Solution {
public:
    int arrangeCoins(int n) {
    int count=0;
    for(int i=1; i<=n; i++){
        if(i>n){
            return count;
        }else{
        n -= i; 
        count ++;        
        }       
      }
      return count;
    }
};
