/*multiple recursion_fibonacci series
0
 1
  0+1=1
    1+1=2
      1+2=3
        2+3=5
          3+5=8
            5+8=13
              8+13=21
                13+21=34*/

#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n<=1)
    return n;
int last = fibo(n-1);
int second_last = fibo(n-2);
return last + second_last;
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}