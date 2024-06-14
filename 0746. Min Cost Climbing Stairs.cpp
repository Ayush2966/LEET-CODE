/* class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,0);
        return min(minCost(n-1, cost,dp), minCost(n-2, cost,dp)) ;
        }
    int minCost(int n, vector<int>&cost, vector<int> &dp){
        if(n<0) return 0;
        if(n==0 || n==1) return cost[n];
        if (dp[n]!=0) return dp[n];
        return dp[n]=cost[n]+ min(minCost(n-1, cost,dp), minCost(n-2, cost,dp));
    }
};*/
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        //vector<int> dp(n + 1);

        // Base cases
        int prev = 0;
        int prev2 = 0;

        for (int i = 2; i <= n; i++) {
            int curr = min(prev + cost[i - 1], prev2 + cost[i - 2]);
            prev2=prev;
            prev=curr;
            
        }

        return prev;
    }
};
