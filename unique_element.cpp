#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int n) {
    // Write your code here

         sort(arr,arr+n);
    for (int i = 0; i < n; i+=2) {
        if (arr[i] != arr[i+1]) {
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
