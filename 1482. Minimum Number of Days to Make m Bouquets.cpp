class Solution {
public:
    bool bouquetFormed(vector<int> arr, int m, int k, int mid){
        int ans=0;
        int count=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<=mid){
                count++;
                    if(count==k){
                        ans++;
                        count=0;
                    }
            }else{
                count=0;
            }
        }
        return (ans>=m);
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        if(bloomDay.size()< (long long)m*k){
            return -1;
        }
        int low= *min_element(bloomDay.begin(), bloomDay.end());
        int high= *max_element(bloomDay.begin(), bloomDay.end());
        int ans=0;
        while(low<=high){
            int mid= (low+high)/2;
            if(bouquetFormed(bloomDay, m, k, mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
