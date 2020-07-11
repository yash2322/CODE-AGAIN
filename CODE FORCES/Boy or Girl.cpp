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
int frequency[150]={0};
//vector<int>frequency(150,0);
FORS(i,s.length()){
    frequency[s[i]]++;
}
int count1=0;
bool talk=true;
FORS(i,150){
    if(frequency[i])
        count1++;
}
if(count1%2==0)
cout<<"CHAT WITH HER!";
else
{
    cout<<"IGNORE HIM!";
}

}
