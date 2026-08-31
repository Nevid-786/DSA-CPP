class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int l=0;
        int h=0;
        int sum=0;
        int n=arr.size();
        while(h<k){
            sum+=arr[h];
            if(h==k-1) break;
            h++;
        }
        int res =INT_MIN;
        while(h<n){
            res=max(res,sum);
            h++;
            if(h==n) break;
            sum= sum+arr[h]-arr[l];
           l++;
            
        }
        return res;
        
    }
};