class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        long long place=1;
        while(n>0)
        {
            if((n%10)!=0)
            ans.push_back((n%10)*place);
            n/=10;
            place*=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};