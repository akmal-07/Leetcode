class Solution {
public:
    int reverseDegree(string s) {
        int ans=0,pos=1;
        for(char c : s) {
            ans+=((97-c+26)*pos);
            pos++;
        }
        return ans;
    }
};