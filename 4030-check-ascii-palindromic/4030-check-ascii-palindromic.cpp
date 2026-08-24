class Solution {
public:
    bool isPalindromic(string s) {
        string a="";
        for(char c:s){
            int b = c;
            for (int i=7;i>=0;i--) {
                a += ((b>>i)&1)+'0';
            }
        }
            string r=a;
        reverse(r.begin(),r.end());
        return a ==r;
    }
};