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
lt n;
cin>>n;
vect(v1);
vect(v2);
FORS(i,n){
    lt input;
    cin>>input;
    v1.push_back(input);
    cin>>input;
    v2.push_back(input);
}
lt answer=0;
FORS(i,n){
    FORS(j,n){
        if(v1[i]==v2[j])
        answer++;
    }
}
cout<<answer;
}
