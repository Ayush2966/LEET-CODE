class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0;
        int e=letters.size()-1;
        int mid=s+(e-s)/2;
        char store=letters[0];
        while(s<=e)
        {
            if(letters[mid]>target)
            {
                store=letters[mid];
                e=mid-1;

            }
        else s=mid+1;
         mid=s+(e-s)/2;
        }
       
        return store;
        
    }
};
