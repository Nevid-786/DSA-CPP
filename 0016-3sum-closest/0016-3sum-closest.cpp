class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size() - 1;
        sort(nums.begin(), nums.end());
        int res =0;
        target = target;
        int diff=INT_MAX;
        for (int i = 0; i < n-1; i++) {

         
            int l = i + 1;
            int r = n;
           
           

          while(l<r){
            int sum = nums[i]+nums[l]+nums[r];
        
            
            if(sum<target){
                l++;
            }else if(sum>target){
                r--;
            }else{
                res=sum;
                break;

            }
           
            if(abs(sum-target)<diff){
               
                diff=abs(sum-target);
                
                res=sum;
            }

          }
             while (i < n && nums[i] == nums[i + 1]) {
              
                i++;
                continue;
            }
        }
        return res;
    }
};