#include<bits/stdc++.h>
using namespace std;
#define FORS(i,n) for(long int i=0;i<n;i++)
#define FORE(i,n) for(long int i=n;i>=0;i--)
#define FORC(i,a,n) for(long int i=a;i<n;i++)
#define TEST long int T;\
cin>>T;
#define FAST ios_base::sync_with_stdio(false);\
cin.tie(NULL);
typedef long int lt;

//yash2322
int main(){
    lt n;
    cin>>n;
    int current_free=0,unnoticed=0;
    FORS(i,n){
        lt input;
        cin>>input;
        if(input!=-1)
        current_free+=input;
        else if(input==-1){
            if(current_free>0){
                current_free--;
            }
            else{
             unnoticed++;
            }
        }
    }
    cout<<unnoticed;
}
