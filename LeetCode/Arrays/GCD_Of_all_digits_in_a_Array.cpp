class Solution {
public:
    int findGCD(vector<int>& nums) {

        auto it = min_element(nums.begin(), nums.end());
        int min_val = *it;
        bool isGCD = true;
        cout<<min_val;
        for (int i = min_val; i > 1; i--) {

            for (auto value : nums) {
                if (value % i != 0) {
                    isGCD = false;
                    break;
                }
            }
            if (isGCD) {
                return i;
            }
        }
        return -1;
    }
};