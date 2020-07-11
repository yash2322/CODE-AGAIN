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
    lt n,input,count=0;
    cin>>n;
    FORS(i,n){
        lt x=0;
        FORS(j,3){
           cin>>input;
           if(input)
                x++;
        }
        if(x>1)
        count++;
    }
    cout<<count;
}
