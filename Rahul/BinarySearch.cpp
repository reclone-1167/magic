#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
       
        if (arr[mid] == x)
            return mid;
  
       
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
  
      
        return binarySearch(arr, mid + 1, r, x);
    }
  
    return -1;
}


int main(){
    // Pass the array from main function
    return 0;
}