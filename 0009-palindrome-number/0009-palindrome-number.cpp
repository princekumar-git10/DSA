class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long  num = 0;
        while (temp>0) {
            long long rem=temp%10;
            num = num * 10 + rem;
            temp/=10;
        }
        if (num == x) return true;
        return 0;
    }
};