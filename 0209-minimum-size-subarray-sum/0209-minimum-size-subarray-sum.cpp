class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int h=0;
        int sum=0;
        int n =nums.size();
        int res=INT_MAX;
        bool exist=false;

        while(h<n){
            sum+=nums[h];
            while(sum>=target){
                exist=true;
                res=min(res,h-l+1);
                sum-=nums[l];
                l++;
            }
           
            h++;

        }
        if(exist){
            return res;
        }else{
            return 0;
        }
        
    }
};