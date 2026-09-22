class Solution {
public:
    string predictPartyVictory(string senate) {
        // int DE=0,RE=0;
        // queue<char> q;
        // for(char c:senate) {
        //     q.push(c);
        // }
        // for(char c:senate) {
        //     if(RE>0 && c=="R") q.pop();
        //     if(c=="R") DE++;
        //     if(c=="D") RE++;
        // }
        queue<int> r;
        queue<int> d;
        for(int i=0;i<senate.size();i++) {
            if(senate[i]=='R') r.push(i);
            else d.push(i);
        }
        while(!r.empty() && !d.empty())
        {
            int rf=r.front();
            int df = d.front();
            r.pop();
            d.pop();
            if(rf < df)
                r.push(rf + senate.size());
            else
                d.push(df + senate.size());
        }
        return r.empty() ? "Dire" : "Radiant" ;
    }
};