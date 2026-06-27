class Solution {
public:
    int reverse(int x)
{   
    long long num = 0;
    while (x!=0) {
        int rem = x%10;
        
        x=x/10;
        
        if (num > 214748364 || (num == 214748364 && rem > 7))
            return 0;

        if (num < -214748364 || (num == -214748364 && rem < -8))
            return 0;

        num = num *10 +rem;
    }
    return num;
}

};