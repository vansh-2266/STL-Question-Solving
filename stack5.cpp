#include<bits/stdc++.h>
using namespace std;

// // naive solution:
void nextGreaterElements(int arr[], int n) {

    for(int i = 0 ; i <  n ; i++){
        int j ;
        for(j = i+1; j < n ; j++){
            if(arr[j]> arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j == n){
            cout<<"-1";
        }
    }        
}

// effecient solution using stack:
 

int main(){
    
    int n ; cin>>n;
    int vec[n];
    
    for(int i = 0; i< n ; i++){
        cin>>vec[i];
        
    }

    nextGreaterElements(vec, n);


}