#include <bits/stdc++.h>
using namespace std;

int digits(int n)
{
    int c = 0;
    while (n > 0)
    {
        c++;

        n /= 10;
    }
    return c;
};
class Solution
{
public:
    bool isArmstrong(int n)
    {
        int o = n;
        int N = digits(n);

        int rev = 0;

        while (n > 0)
        {
            int ld = n % 10;

            int power = 1;
            for (int i = 0; i < N; i++)
            {
                power *= ld;
            }

            rev = rev + power;

            n /= 10;
        }
        if (rev == o)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Solution s;
    cout << s.isArmstrong(153);
    return 0;
}