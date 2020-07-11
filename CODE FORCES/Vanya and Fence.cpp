#include<bits/stdc++.h>
using namespace std;
#define FORS(i,n) for(long int i=0;i<n;i++)
#define FORE(i,n) for(long int i=n;i>=0;i--)
typedef long int lt;

//yash2322
int main(){
long int n,h,count=0;
cin>>n>>h;
FORS(i,n){
    lt input;
    cin>>input;
    if(input>h)
        count+=2;
    else
        count++;
}
 cout<<count;   
}