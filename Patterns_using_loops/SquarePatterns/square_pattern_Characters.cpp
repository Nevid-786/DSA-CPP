// ABCDE
// ABCDE  n=5
// ABCDE
// ABCDE
// ABCDE


#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n:";
    cin>>n;
    

    for(int i=1;i<=n;i++){
         char ch='A';
        for (int j=1;j<=n;j++){
            cout<<ch;
            ch++;

        }
        cout<<"\n";

    }
    return 0;
}