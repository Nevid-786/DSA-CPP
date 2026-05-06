#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>map;
        for(auto x:nums){
            auto it=map.find(x);
            if(it!=map.end()){
                cout<<"found "<<x<<" "<<it->second<<endl;
                map[x]=it->second+1;
            }
            else{
                map[x]=1;
            }
        }
        int majorityValue=map.begin()->second;
        int majorityElement=map.begin()->first;
      for(auto& pair : map){
        int key = pair.first;
        int value = pair.second;
        cout<<key<<" "<<value<<endl;
        cout<<majorityElement<<" "<<majorityValue<<endl;
        if(value>majorityValue){
            majorityElement=key;
            majorityValue=value;

        }


      }
      if(majorityValue>(nums.size()/2)){
        return majorityElement;
      }
      return -1;
        
    }
};

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    Solution solution;
    cout << solution.majorityElement(nums) << endl;
    return 0;
}