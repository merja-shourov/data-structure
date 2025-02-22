// Find peak value by linear search :)
/*
    Case 01: If only one peak available
    Case 02: If first or last element is peak
    Case 03: If multiple peak is available
*/

#include<bits/stdc++.h>
using namespace std;

int main(void){ 

    int n; cin >> n;
    int arr[n];
    for( int i=0; i<n; i++ ){
        cin >> arr[i];
    }

    // appling binary search find peak element

    int low, high, mid, peak;
    low = 0; high = n-1;


    while ( low <= high )
    {
        mid = low + (high-low)/2;

        if( n == 1 ){
            peak = 0;
            break;
        }
        if( arr[0] > arr[1] ){
            peak = 0;
            break;
        }
        if( arr[n-1] > arr[n-2]){
            peak = n-1;
            break;
        }
        
        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1] ){
            peak = mid;
            break;
        }
        if( arr[mid] > arr[mid+1]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    cout << peak << "\n";
    return 0;
}