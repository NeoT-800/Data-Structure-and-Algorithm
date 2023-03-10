#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int n) {
    // Write your code here

    // Apptroach1: O(N)
        int ans=0;
    for(int i=0; i<n ;i++){
        ans=ans^arr[i];
    }
    return ans;
    
    // Approach2: O(NlogN)
         sort(arr,arr+n);
    for (int i = 0; i < n; i+=2) {
        if (arr[i] != arr[i+1]) {
            return arr[i];
        }
    }
    
    // Approach3: O(N^2)
            for(int i=0; i<n; i++){
        bool isUnique=true;
        for(int j=0; j<n; j++){
          if (arr[i] == arr[j] && i != j) {
            isUnique=false;
            break;
          }
        }
        if(isUnique){
            return arr[i];
        }
    }
    
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<findUnique(arr,n);
    return 0;
}
