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

//yash2322
int main(){
string s1,s2;
cin>>s1>>s2;
lt indexS1=0;
FORS(i,s2.length()){
    if(s2[i]==s1[indexS1])
        indexS1++;
}
cout<<indexS1+1;
}