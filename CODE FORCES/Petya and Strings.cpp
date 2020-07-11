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
string s1,s2;
lt answer=0;
cin>>s1>>s2;
//transform(s1.begin(),s1.end(),s1.begin(),::tolower)
FORS(i,s1.length()){
    if(s1[i]>90){
        s1[i]-=32;
    }
    if(s2[i]>90){
        s2[i]-=32;
    }
    if(s1[i]<s2[i]){
        answer=-1;
        break;
    }
    else if(s1[i]>s2[i]){
        answer=1;
        break;
    }

}
cout<<answer;
}
