#include<bits/stdc++.h>
using namespace std;
#define FORS(i,n) for(long int i=0;i<n;i++)
#define FORE(i,n) for(long int i=n;i>=0;i--)
typedef long int lt;
//yash2322
int main(){
lt size1,win=0;
cin>>size1;
char s[size1];
cin>>s;
FORS(i,strlen(s)){
if(s[i]=='A')
    win++;
else
    win--;
}
if(win>0)
    cout<<"Anton";
else if(win<0)
    cout<<"Danik";
else
    cout<<"Friendship";
}
