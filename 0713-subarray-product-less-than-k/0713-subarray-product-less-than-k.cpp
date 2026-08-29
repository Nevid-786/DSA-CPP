class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int n = nums.size();
        int count = 0;
        int l = 0;

        while (l < n) {
            int h = l;
            int sum = nums[l];

            while (h < n) {

                if (sum < k) {
                    count++;
                }else {
                    break;
                }
                if(h<n-1){
                    h++;
                }else{
                    break;
            }
                sum *= nums[h];
            }
            l++;
        }
        return count;
    };
};