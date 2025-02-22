#include<bits/stdc++.h>
using namespace std;


// Condition of binary search is "Sorted order"
int binarySearch( vector<int> v, int n, int target){
    int low, high, mid;
    low = 0;
    high = n-1;

    while ( low <= high )
    {
        mid = low + (high-low)/2;
        
        // mid = (low+high)/2;
        if( v[mid] == target ){
            return mid;
        }else if( target > v[mid] ){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}

int main(void){
    int n; cin >> n;
    vector<int> v(n);

    for( int i=0; i<n; i++ ){
        cin >> v[i];
    }

    int target;
    cin >> target;
  
    
    cout << binarySearch( v, n, target) << endl;
    return 0;
}