#include<bits/stdc++.h>
using namespace std;
#define FORS(i,n) for(long int i=0;i<n;i++)
#define FORE(i,n) for(long int i=n;i>=0;i--)
#define FORC(i,a,n) for(long int i=a;i<n;i++)
#define TEST long int T;\
cin>>T;
#define FAST ios_base::sync_with_stdio(false);\
cin.tie(NULL);
typedef long int lt;

//yash2322
int main(){
 lt n,count=0;
 cin>>n;
 string s;
 cin>>s;
 FORC(i,1,n){
     if(s[i]==s[i-1]){
         count++;
     }
 }
 cout<<count;
}
