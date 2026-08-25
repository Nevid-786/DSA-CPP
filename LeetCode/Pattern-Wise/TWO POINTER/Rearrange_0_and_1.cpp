// Given an array arr[] consisting of only 0's and 1's.
// Modify the array in - place to segregate 0s onto the left side and 1s onto the right side of the array.

//    Examples :

//     Input : arr[] = [ 0, 1, 0, 1, 0, 0, 1, 1, 1, 0 ] 
//     Output : [ 0, 0, 0, 0, 0, 1, 1, 1, 1, 1 ] 
// https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1


//brute force method
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void segregate0and1_BRUTE(vector<int> &arr) {
        int Zeros=0;
        int Ones=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                Zeros++;}
            else{
                Ones++;
            }
        }
        arr.clear();
  
        for(int i=0;i<Zeros;i++){
            arr.push_back(0);
        }
        
        for(int i=0;i<Ones;i++){
            arr.push_back(1);
        }
        
    }
    
  public:
    void segregate0and1(vector<int> &arr) {
        int i=0;
        int j=arr.size()-1;
      while(i<j){
          while(arr[i]==0) i++;
          while(arr[j]==1) j--;
          
          if(i<j) swap(arr[i],arr[j]);
      }
        
    }
};





int main() {
    Solution s;
    vector<int> a={0, 1, 0, 1,0};
  
    s.segregate0and1(a);
  for(int i=0;i<a.size();i++){
      cout<<a[i]<<" ";
    }
    return 0;
}