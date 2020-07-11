#include<bits/stdc++.h>
using namespace std;
#define FORS(i,n) for(long int i=0;i<n;i++)
#define FORE(i,n) for(long int i=n;i>=0;i--)
typedef long int lt;

//yash2322
int main(){
    lt limak,bob,count=0;
    cin>>limak>>bob;
    while(1){
        if(limak>bob)
            break;
        limak*=3;
        bob*=2;
        count++;
    }
    cout<<count;
}
