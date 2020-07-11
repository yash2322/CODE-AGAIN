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
string s;
cin>>s;
lt count=0;
FORS(i,s.length()){
    if(s[i]>90)
        count++;
    else
        count--;
}
if(count>=0){
    FORS(i,s.length()){
    s[i]=tolower(s[i]);
    }
}
else{
    FORS(i,s.length()){
    s[i]=toupper(s[i]);
    }
}
cout<<s;
}
