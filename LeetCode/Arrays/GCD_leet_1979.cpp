class Solution {
public:
    int findGCD(vector<int>& nums) {

        auto it = min_element(nums.begin(), nums.end());
        int min_val = *it;
        auto kit = max_element(nums.begin(), nums.end());
        int max_val = *kit;

   

        for (int i = min_val; i > 1; i--) {

            if (min_val % i == 0 && max_val % i == 0) {
                cout << i << endl;
                return i;
                
            }

            
        }
          return 1;
    }
  
};
