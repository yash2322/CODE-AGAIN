#include<bits/stdc++.h>
using namespace std;
#define FORS(i,n) for(long int i=0;i<n;i++)
#define FORE(i,n) for(long int i=n;i>=0;i--)
#define TEST long int T;\
cin>>T;
#define FAST ios_base::sync_with_stdio(false);\
cin.tie(NULL);
typedef long int lt;
#define vect(a) vector<long int>a
#define pb(a) push_back(a)

//yash2322
int main(){
int n,k;
cin>>n>>k;
string s="";
FORS(i,k){
s+='a'+i;
}
int index=0;
FORS(i,n){
if(i%k==0)
    index=0;
cout<<s[index];
index++;
}
}
