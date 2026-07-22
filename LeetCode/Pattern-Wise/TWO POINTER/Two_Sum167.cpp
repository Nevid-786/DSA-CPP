
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right= numbers.size()-1;
        int sum;
        vector<int> temp;
        while(left<right){
            sum=numbers[left]+numbers[right];
            if(sum<target){
                left++;
            }
            else if(sum>target){
                right--;
            }
            else{
                temp.push_back(left+1);
                temp.push_back(right+1);
                return temp;

            }

        }

    }
};
int main() {
    Solution s;
    vector<int> a={12,2,2,2};
    s.twoSum(a,3);
    return 0;
}