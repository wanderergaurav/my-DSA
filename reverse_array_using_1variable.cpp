/*reverse an array using one variable*/

#include<bits/stdc++.h>
using namespace std;

void func(int i, int n, int arr[]){
    if(i>=n/2)
    return;
swap(arr[i], arr[n-i-1]);
func(i+1, n, arr);
}
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    func(0, n, arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}