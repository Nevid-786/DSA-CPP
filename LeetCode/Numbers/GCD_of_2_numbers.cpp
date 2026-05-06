#include <iostream>
using namespace std;

class Solution {
public:
    int GCD(int n1,int n2) {
        int n=min(n1,n2);
        int gcd;
        cout<<n<<endl;
        for(int i=n;i>=1;i--){
            if(n1%i==0 && n2%i==0){
                cout<<i<<endl;
                gcd=i;
                break;
            }
        }
        return gcd;

    }
};


int main() {
    int n1=6,n2=9;

    Solution S;
    cout<<S.GCD(n1,n2);
    
    return 0;
}