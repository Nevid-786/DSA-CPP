#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> twoSum_Value(vector<int>& nums, int target) {
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


      vector<int> twoSum_indexes(vector<int>& nums, int target) {
        vector<int> temp;
        int found=0;

        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (nums[i] + nums[j] == target) {
                    temp.push_back(i);
                    temp.push_back(j);
                    found=1;
                    break;
                }
            }
            if(found==1){
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
    // v=s.twoSum_Value(v,target);
    v=s.twoSum_Value(v,target);
   for(auto it:v){
    cout<<it<<",";
   }
    
    return 0;
}