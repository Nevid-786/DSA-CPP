class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int n = nums.size();
        int count = 0;
       int l = 0;
            int h = 0;
            int sum =1;

        while ( h < n) {
            sum*=nums[h];
            
            while (sum >=k && l<n ) {
                cout<<sum<<endl;
                 sum/=nums[l]; 
                l++;
            }
            count+=h-l+1;
           
            h++;
        }
        return count;
    };
};



//Brute force T:O(n2)
// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {

//         int n = nums.size();
//         int count = 0;
//         int l = 0;

//         while (l < n) {
//             int h = l;
//             int sum =1;

//             while (h < n) {
//                 sum *= nums[h];
//                 if (sum < k) {
//                     count++;
//                 }else {
//                     break;
//                 }
           
//               h++;  
//             }
//             l++;
//         }
//         return count;
//     };
// };