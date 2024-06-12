class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        for(int i=1; i<arr.size(); i++){
            arr[i]= arr[i]+arr[i-1];
        }
        int l=0;
        int r=k;
        int count=0;
        if(arr[k-1] /k >=threshold){
            count++;
        }
        while(r<arr.size()){
            if((arr[r]-arr[l])/k >=threshold){
                count++;
                r++;
                l++;
            }else{
                r++;
                l++;
            }
        }
        return count;

    }
};
