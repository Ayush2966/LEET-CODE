class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum =0;
        int m;
        for(int i=0; i<k; i++){
            sum += nums[i];
        }
         m =sum;
        int i =0, j=k;
        while(j<nums.size()){
            sum+= nums[j] - nums[i];
            if(sum>=m){
                m=sum;
            }
            j++;
            i++;
        }
        
        return (double)m/(double)k;
    }
    
};
