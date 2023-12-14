/*print name 5 times*/

#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void name(){
    if(cnt==5)
    return;
cout<<"gaurav"<<endl;
cnt++;
name();
}
int main(){
    name();
    return 0;
}

