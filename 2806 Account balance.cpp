class Solution {
public:
    int accountBalanceAfterPurchase(int k) {
    if(k%10>=5){
        k+=(10-k%10);
    }else{
        k=k-(k%10);
    }
    return 100-k;
    }
};
