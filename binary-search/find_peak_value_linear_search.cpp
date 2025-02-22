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

    
    int peak;
    // // solution-1: extended
    // for( int i=1; i<n-1; i++ ){

    //     if( arr[0] > arr[i] ){
    //         peak = 0;
    //     }
    //     if( arr[n-1] > arr[n-2] ){
    //         peak = n-1;
    //     } 

    //     if( arr[i] > arr[i-1] && arr[i] > arr[i+1]){
    //         peak = i;
    //     }

    // }
    
    // solution-2: sort version
    for( int i=0; i<n; i++ ){
        if( (arr[i] > arr[i+1] || ( i == n-1 )) && (arr[i] > arr[i-1] || (i==0)) ){
            peak = i;
        }
    }
    cout << peak;
    return 0;
}