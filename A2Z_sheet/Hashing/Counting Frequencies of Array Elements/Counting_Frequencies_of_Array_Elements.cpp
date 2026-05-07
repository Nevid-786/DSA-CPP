#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> countFrequencies(vector<int> &nums)
    {
        unordered_map<int, int> map;
        for (auto it : nums)
        {
            map[it]++;
        }
        vector<vector<int>> sol;
        cout << "[";
        bool first = true;

        for (auto it : map)
       
        { 
            sol.push_back(vector<int>{it.first,it.second});

            if (!first)
                cout << ",";
            cout << "[" << it.first << "," << it.second << "]";
            first = false;
        }
        cout << "]";
        return sol;
    }
    
};

int main()
{
    vector<int> nums = {1, 2, 2, 1, 3};
    Solution S;
    S.countFrequencies(nums);

    return 0;
}
