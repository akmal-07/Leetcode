class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans = -1;
        int minD = INT_MAX;
        int n = drones.size();
        for(int i=0;i<n;i++)
            {
                int x = drones[i][0];
                int y = drones[i][1];
                int r = drones[i][2];
                int dist = abs(x - target[0]) + abs(y - target[1]);
                if(dist <= r && dist < minD) {
                    minD = dist;
                    ans = i;
                }
            }
        return ans;
    }
};