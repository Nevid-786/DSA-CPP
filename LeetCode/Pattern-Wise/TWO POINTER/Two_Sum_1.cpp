#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> temp;
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int left =0;
        int right=n-1;
        while(left<right){
            int sum=nums[left]+nums[right];
            if(sum<target){
                left++;
            }
            else if(sum>target){
                right--;
            }
            else if (sum==target){
              temp.push_back(nums[left]);
              temp.push_back(nums[right]);
              break;

            }
        }
        return temp;
        
    }
};

int main() {
    vector<int> v={1,4,6,2,4,42,3};
    int target=44;
    Solution s;
    v=s.twoSum(v,target);
   for(auto it:v){
    cout<<it<<",";
   }
    
    return 0;
}