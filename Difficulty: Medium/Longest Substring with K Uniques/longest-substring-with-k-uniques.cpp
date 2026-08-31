class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int l=0;
        int h=0;
        int res=INT_MIN;
        int n=s.length();
        map<char,int> m;
        while(h<n){
            m[s[h]]++;
            // cout<<s[h]<<":"<<m[s[h]]<<endl;
            while(m.size()>k){
                
               
                // cout<<"res:"<<res<<"lenth:"<<h-l+1 <<" l:"<<l<<" h:"<<h<<" size:"<<m.size()<<endl;
                // cout<<"s:"<<s[l]<<" m:"<<m[s[l]]<<" l:"<<l<<" h:"<<h<<endl;
                 m[s[l]]--;
                 
                if(m[s[l]]<=0){
                    m.erase(s[l]);
                }
              
                l++;
            }
             if(m.size()==k)  res=max(res,h-l+1);
            h++;
        }
        return res==INT_MIN? -1:res;
        
    }
};