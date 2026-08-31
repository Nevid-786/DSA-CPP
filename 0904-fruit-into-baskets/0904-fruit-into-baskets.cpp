class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       map<int,int>m;
        int l=0;
        int h=0;
        int res=INT_MIN;
        while(h<fruits.size()){
            m[fruits[h]]++;
            while(m.size()>2){
                m[fruits[l]]--;
                if(m[fruits[l]]<=0){
                    m.erase(fruits[l]);
                }
                l++;
            }
            res=max(res,h-l+1);
            h++;
        }
      return res==INT_MIN?1:res;
        
    }
};







//did not consider the contiguos picking solved thinking random picking 
//the tress must be contuguos example [3,3,3,1,2,1,1,2,3,3,4] ans is 5 why as 3 is 5 times and 1 is 3 times so only two fuits o/p can be 8 
//nope as they are picked from non cintiguos trees not adjacent trees:here 1,2,1,1,2  are from  contiguos trees and only two fruits 
// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         map<int,int>m;
//       for(int i=0;i<fruits.size();i++){
//         m[fruits[i]]++;
//       }
//       int count=0;
//       int res=0;
//      for (auto it = m.rbegin(); it != m.rend(); ++it){
//         if(count==2) break;
//         res+=it->second;
//         cout<<it->first<<":"<<it->second<<endl;
//         count++;
//       }
//       return res;
        
//     }
// };