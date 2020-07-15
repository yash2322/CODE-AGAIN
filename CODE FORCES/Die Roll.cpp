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
lt a,b,gcd;
cin>>a>>b;
lt max=a>=b?a:b;
int chances= 6-max+1;
gcd= __gcd(chances,6);
cout<<chances/gcd<<"/"<<6/gcd;
}
