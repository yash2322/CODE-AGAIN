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
    long long n,x,num,c=0;
    cin>>n>>x;
    char a;
    while(n--){
        cin>>a>>num;
        if(a=='+'){
                x+=num;
        }else{
            if(x>=num)
                x-=num;
                else
                    c++;
        }
    }
    cout<<x<<" "<<c;
}
