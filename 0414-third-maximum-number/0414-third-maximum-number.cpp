class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN, sec = LLONG_MIN, tir = LLONG_MIN;
        for( int x:nums)
        {
            if(x==first || x == sec || x == tir)
            continue;
            if(x>first)
            {
                tir = sec;
                sec = first;
                first = x;
            }
            else if(x>sec)
            {
                tir = sec;
                sec = x;
            }
            else if(x>tir)
            {
                tir = x;
            }
        }
        return (tir == LLONG_MIN) ? first : tir;
    }
};