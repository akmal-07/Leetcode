class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> freq(26,0);
        char ans;
        for(char c : s)
        {
            freq[c - 'a']++;
            if(freq[c-'a']==2) {
                ans = c;
                break;
            }
        }
        return ans;
    }
};