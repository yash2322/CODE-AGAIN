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
 lt n;
 cin>>n;
 vector<int>values;
 FORS(i,n){
     lt input;
     cin>>input;
     values.push_back(input);
 }
sort(values.begin(),values.end());
for(auto a:values)
cout<<a<<" ";
}
