#include <iostream>
using namespace std;
void Selection_sort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
       int  min_idx=i;
        for (int j = i; j < n; j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }

        }
        swap(arr[i],arr[min_idx]);
     

    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n=sizeof(arr)/sizeof(int);
    Selection_sort(arr,n);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}