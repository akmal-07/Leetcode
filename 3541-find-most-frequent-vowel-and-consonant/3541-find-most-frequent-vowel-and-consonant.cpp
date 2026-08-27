class Solution {
public:
    int maxFreqSum(string s) {
        int ans =0;
        int maxo=0,maxc=0;
        vector<int> freq(26,0);
        for(int c : s) {
            freq[c - 'a']++;
            if(c == 'a'|| c == 'e' || c == 'i'|| c == 'o'|| c == 'u')
            {
                maxo = max(maxo,freq[c-'a']);
            } 
            else {
                maxc = max(maxc,freq[c-'a']);
            }
        }
        ans = maxo+maxc;
        return ans;
    }
};