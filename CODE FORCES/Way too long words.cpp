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
TEST
while(T--){
    string s,output;
    cin>>s;
    if(s.length()<=10)
        cout<<s<<endl;
    else{
        output=s[0]+to_string(s.length()-2)+s[s.length()-1];
    cout<<output<<endl;
    }
}
}
