class Solution {
public:
    vector<int> constructRectangle(int area) {
        int x = sqrt(area);
        int w =1;
        for(int i=1; i<=x; i++){
            if(area % i == 0){
                w = i;
            }
        }
        vector<int> ans;
        ans.push_back(area / w);
        ans.push_back(w);
        return ans;

    }
};
