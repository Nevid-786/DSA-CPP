//using slow and fast pointer

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
      int s,f;
      s=f=0;
      while(true){
        s=nums[s];
        f=nums[nums[f]];
        if(s==f){
           s=0;
           while(s!=f){
             s=nums[s];
        f=nums[f];
           } 
           return s;
        }
      }
      return -1;
        
    }
};

// Using Sorting and returning first duplicate
// Time comp:O(nlogn);
// space comp:O(1);

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         if(n==1){
//             return nums[0];
//         }

//         for(int i=0;i<n;i++){
//             if(nums[i]==nums[i+1]){
//                 return nums[i];
//             }
//         }
//         return -1;
        
//     }
// };

