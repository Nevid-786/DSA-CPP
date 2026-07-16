#include <iostream>
using namespace std;
 bool isPalindrome(string s) {
       
   
        string cleaned;
     
             for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }
        
         int n=cleaned.length();
        for(int i=0;i<(n/2);i++){
            cout<<cleaned[i]<<" "<<cleaned[n-1-i]<<endl;
            if(cleaned[i]!=cleaned[n-1-i]){
                return false;
            }
        }

        
   


        return true;
        
    }

int main() {
    string s="A man, a plan, a canal: Panama";
    if (isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}