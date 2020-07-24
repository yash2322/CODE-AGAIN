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
long int t;
cin>>t;
vector<vector<int>>values(4);
FORS(i,t){
    lt input;
cin>>input;
values[input].pb(i+1);
}
lt teams=min(values[1].size(),min(values[2].size(),values[3].size()));
cout<<teams<<endl;
FORS(i,teams){
cout<<values[1][i]<<" "<<values[2][i]<<" "<<values[3][i]<<endl;
}
}
