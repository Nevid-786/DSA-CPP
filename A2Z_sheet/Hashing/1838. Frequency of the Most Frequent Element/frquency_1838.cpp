#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
     
        int most_frquent = 0;
        cout<<"program started"<<nums.size()<<endl;
        for (int i=nums.size()-1; i>=0; i--)
        {
         cout<<nums[i]<<endl;
            int freq = 1;
            int j = k;
            for(int l=i-1; l>=0 && j>0; l--)

            {
                cout<<nums[i]<<" "<<nums[l]<<" " <<nums[i] - nums[l]<<endl;
                if(nums[i] - nums[l] <= j)
                {
                    freq++;
                    cout<<freq<<endl;
                    j -= (nums[i] - nums[l]);
                }
                else
                {
                    break;
                }
            }
               
              
            if (freq >= most_frquent)
                {
                    most_frquent = freq;
                }
           
        }
         cout << most_frquent;
        return most_frquent;
    }
}

;

int main() {
    vector<int> nums = {1, 2, 4};
    int k = 5;
    Solution S;
  cout<< "max freq"<< S.maxFrequency(nums, k);
    
    return 0;
}