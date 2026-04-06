#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n:";
    cin>>n;
    
    int num=1;

    for(int i=0;i<n;i++){
        for (int j=1;j<=n;j++){
            cout<<num<<" ";
            num=num+1;
         

        }
        cout<<"\n";

    }
    return 0;
}