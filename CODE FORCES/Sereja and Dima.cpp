#include<bits/stdc++.h>
using namespace std;
#define FORS(i,n) for(long int i=0;i<n;i++)
#define FORE(i,n) for(long int i=n;i>=0;i--)
#define TEST long int T;\
cin>>T;
#define FAST ios_base::sync_with_stdio(false);\
cin.tie(NULL);
typedef long int lt;
#define vect(a) vector<int>a;
//yash2322
int main(){
    lt n;
    cin>>n;
    vect(values);
    FORS(i,n){
        lt input;
        cin>>input;
        values.push_back(input);
    }
    lt l=0,r=n-1,sareja=0,dima=0;
    bool turn=true;
    while(l<=r){
        if(turn){
            if(values[l]>values[r]){
                sareja+=values[l];
                l++;
            }
            else{
                sareja+=values[r];
                r--;
            }
            turn=false;
        }
        else{
            if(values[l]>values[r]){
                dima+=values[l];
                l++;
            }
            else{
                dima+=values[r];
                r--;
            }
            turn=true;
        }
    }

    cout<<sareja<<" "<<dima;
}
