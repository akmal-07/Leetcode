class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans=0,cur=0;
        for(int i=0;i<requests.size();i++)
            {
              ans += abs(cur-requests[i]);
                cur = requests[i];
            }
        return ans;
    }
};