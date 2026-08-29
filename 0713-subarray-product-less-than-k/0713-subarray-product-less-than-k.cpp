class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int n = nums.size();
        int count = 0;
        int l = 0;

        while (l < n) {
            int h = l;
            int sum =1;

            while (h < n) {
                sum *= nums[h];
                if (sum < k) {
                    count++;
                }else {
                    break;
                }
           
              h++;  
            }
            l++;
        }
        return count;
    };
};