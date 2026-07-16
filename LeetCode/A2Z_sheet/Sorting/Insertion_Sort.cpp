#include <iostream>
using namespace std;
void Insertion_Sort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
       
        for (int j = i; j >0; j--){
           if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
           }else{
            break;
           }
        }
        
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n=sizeof(arr)/sizeof(int);
    Insertion_Sort(arr,n);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}