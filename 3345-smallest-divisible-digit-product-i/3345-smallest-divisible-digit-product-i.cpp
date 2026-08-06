class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int prdt=1,x=n;
        while(x>0){
            prdt*=(x%10);
            x/=10;
        }
        if(prdt%t==0)return n;
        n++;
        }
    }
};