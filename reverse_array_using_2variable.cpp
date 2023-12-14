/*reverse an array using two variable*/

#include<bits/stdc++.h>
using namespace std;
void func(int arr[], int l, int r){
    if(l>=r)
    return;
swap(arr[l],arr[r]);
func(arr, l+1, r-1);
}
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    cout<<endl;
    
    int arr[n];
    cout<<"enter element of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    func(arr, 0, n-1);
    cout<<"reversed array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}