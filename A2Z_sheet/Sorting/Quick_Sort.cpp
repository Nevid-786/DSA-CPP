#include <bits/stdc++.h>
using namespace std;

int m(int arr[], int low, int high)
{
    int pivot =arr[low];
  
    int i=low;
    int j=high;
    while(i<j){
        while(pivot>=arr[i] && i<high){
            i++;
        }
        while (pivot<arr[j] && j>=low)
        {
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
        
    }
    swap(arr[j],arr[low]);
    return j;
}
void ms(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int pivot_idx = m(arr,low,high);
    
    ms(arr, low, pivot_idx-1);
    ms(arr, pivot_idx + 1, high);
   
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(int);
    ms(arr, 0,n-1);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}