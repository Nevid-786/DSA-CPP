
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= 2 * n - 1; i++)
    {

        // stars
        for (int j = 1; j <= (i <= n ? i : 2 * n - i); j++)
        {
            cout << "*";
        }

        // ??spaces

        for (int j = 1; j <=(i <= n ? 2*(n-i):2*(i-n) ); j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= (i <= n ? i : 2 * n - i); j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    return 0;
}