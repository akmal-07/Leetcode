class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int turns=0;
        for(int i=0;i<tickets.size();i++)
        {
            q.push(i);
        }
        while(tickets[k]>0)
        {
            int f = q.front();
                q.pop();
                tickets[f]--;
                if(tickets[f]>0) q.push(f);
                turns++;
        }
        return turns;
    }
};