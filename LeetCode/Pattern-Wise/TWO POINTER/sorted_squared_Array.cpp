
#include <iostream>
#include<bits/stdc++.h>
using namespace std;class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int end = nums.size();

        while ( left<nums.size() && nums[left] < 0) {
            left++;
        }
        int right = left;
        left--;
        vector<int> temp;

        while (left >= 0 && right < end) {
            if ((nums[left]*nums[left]) < (nums[right]*nums[right])) {
                temp.push_back(nums[left]*nums[left]);
                left--;
            } else {
                temp.push_back(nums[right]*nums[right]);
                right++;
            }
        }
        while(left>=0){
            temp.push_back(nums[left]*nums[left]);
            left--;
        }
        while(right<end){
            temp.push_back(nums[right]*nums[right]);
            right++;
        }

        return temp;
    }
};

int main() {
    Solution s;
    vector<int> a={0, 1, 0, 1,0};
  
    vector<int>sol=s.sortedSquares(a);
  for(int i=0;i<sol.size();i++){
      cout<<sol[i]<<" ";
    }
    return 0;
}