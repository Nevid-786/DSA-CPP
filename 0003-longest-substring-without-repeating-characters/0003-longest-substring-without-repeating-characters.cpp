class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         map<char,int>m;
         if(s.size()<1) return 0;
        int l=0;
        int h=0;
        int res=INT_MIN;
        int length;
        while(h<s.size()){
            m[s[h]]++;
            length=h-l+1;
            // cout<<length<<endl;
            
            while(length>m.size()){
                // cout<<"l:"<<l <<endl;
                m[s[l]]--;
                if(m[s[l]]<=0){
                    m.erase(s[l]);
                }
                l++;
                length=h-l+1;
            }
            res=max(res,length); // as window have only 2 fruits therfore its lenth is equal to no. of fruits in window 
            h++;
        }
      return res==INT_MIN?1:res;
        
    }
    
};