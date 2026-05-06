#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
       int rev=0;
       bool isNeg=false;
 
        while(x!=0){
            cout<<rev<<endl;
                if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
    return 0;}
            rev=rev*10+x%10;
            x/=10;
        }

       
        return rev;
    }
};


int main() {
    int x;
    cin>>x;
    Solution S;

    cout<<S.reverse(x);
  
    
    return 0;
}