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
    lt n,b,d,sum=0,c=0;
    cin>>n>>b>>d;
    vect(orange);
    FORS(i,n){
    lt input;
    cin>>input;
    orange.pb(input);
    if(input<=b)
    sum+=input;
    if(sum>d){
        sum=0;
        c++;
    }
    }
    cout<<c;
}
