#include<bits/stdc++.h>
using namespace std;
#define FORS(i,n) for(long int i=0;i<n;i++)
#define FORE(i,n) for(long int i=n;i>=0;i--)
#define TEST long int T;\
cin>>T;
#define FAST ios_base::sync_with_stdio(false);\
cin.tie(NULL);
typedef long int lt;
#define vect(a) vector<int>a

//yash2322
int main(){
lt x,y;
cin>>x>>y;
lt i=1;
while (i<10)
{
    if((i*x)%10==0||((i*x))%10==y)
    {
        cout<<i;
        break;
    }
    i++;
}
if(i==10)
{
    cout<<10;
}
}
