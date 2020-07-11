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
lt answer=0;
set<long int>values;
FORS(i,4)
{
    lt input;
    cin>>input;
    values.insert(input);
}
cout<<4-values.size();
}
