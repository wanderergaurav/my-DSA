/*sum of first n nos. using functional way*/

#include<bits/stdc++.h>
using namespace std;

int func(int n){
    if(n==0){
    return 0;
    }
return (n+func(n-1));
}
int main(){
    int n;
    cin>>n;
    cout<<func(n);
    return 0;
}