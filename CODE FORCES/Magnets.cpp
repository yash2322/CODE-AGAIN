#include<bits/stdc++.h>
using namespace std;
#define FORS(i,n) for(long int i=0;i<n;i++)
#define FORE(i,n) for(long int i=n;i>=0;i--)
#define TEST long int T;\
cin>>T;
#define FAST ios_base::sync_with_stdio(false);\
cin.tie(NULL);
typedef long int lt;

//yash2322
int main(){
lt n,input,input2,count=1;
cin>>n;
cin>>input;
FORS(i,n-1){
    cin>>input2;
    if(input!=input2)
        count++;
    input=input2;

}
cout<<count;
}
