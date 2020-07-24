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
    string s;
    cin>>s;
    vector<char>ans;
    FORS(i,s.length()){
        if(s[i]!='+')
            ans.pb(s[i]);
    }
    sort(ans.begin(),ans.end());
    FORS(i,ans.size()){
        if(i<ans.size()-1)
    cout<<ans[i]<<"+";
    else
        cout<<ans[i];
    }
}
