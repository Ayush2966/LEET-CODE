class Solution {
public:
    int calc(int n) {
        int ans = 0;
        while (n) {
            ans += (n%10) * (n%10);
            n = n / 10;
        }
        return ans;
    }
    bool isHappy(int n) {
        bool done = false;
        int x = 7;
        while (x--) {
            n = calc(n);
        }
        return n == 1;
    }
};
