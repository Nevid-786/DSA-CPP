class Solution {
public:
    int fun(int n) {
        int sum = 0;
        while (n > 0) {
            int l = n % 10;
            sum += (l * l);
            n/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int s=n;
        int f=n;
        while(f!=1){
            s=fun(s);
            f=fun(f);
            f=fun(f);
            if(f==s && s!=1){
                return false;
                
            }

        }
        return true;

    }
};