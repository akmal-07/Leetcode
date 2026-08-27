class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       gain.insert(gain.begin(), 0);
        int sum = 0;
        for(int i=0;i<gain.size();i++)
        {
            sum+=gain[i];
            gain[i]=sum;
        }
        sort(gain.begin(),gain.end());
        
        return gain[gain.size()-1];
    }
};