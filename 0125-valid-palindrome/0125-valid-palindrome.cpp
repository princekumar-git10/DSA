class Solution {
public:
    bool check(string &s,int l,int r) {
        // int l = s.size() ;
        if (l>=r) return true;
        if (s[l] !=s[r]) return false;
        return check(s,l+1,r-1);
    }
    bool isPalindrome(string s) {
        string temp;

        for (char c:s){
            if (isalnum(c))
                temp += tolower(c);
        }
        return check(temp, 0, temp.size()-1);
    }
};