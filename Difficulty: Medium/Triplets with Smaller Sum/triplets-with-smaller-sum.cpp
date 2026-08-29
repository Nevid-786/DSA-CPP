class Solution {
  public:
    int countTriplets(int target, vector<int>& arr) {
        int n = arr.size() - 1;
        sort(arr.begin(), arr.end());
        int count=0;
        for (int i = 0; i < n-1; i++) {

            int l = i + 1;
            int r = n;
     
          while(l<r){
            int sum = arr[i]+arr[l]+arr[r];


            if(sum>=target){
                
             r--;
            }
           else{
            count+=r-l;
            l++;
            }

          }
        }
        return count;
        
    }
};