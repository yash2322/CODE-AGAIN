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

lt n,t,k,d;
cin>>n>>t>>k>>d;
if(n>k){
    if(d<t){
        cout<<"YES";
        return 0;
    }
    else{
        lt x=d/t;
        //lt baked=x*k;
        if((n-(x*k))>k){
           cout<<"YES";
           return 0;
           }
           else{
                cout<<"NO";
                return 0;
            }
    }
}
cout<<"NO";
return 0;
}
