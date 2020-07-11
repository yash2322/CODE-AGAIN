#include<bits/stdc++.h>
using namespace std;
#define FORS(i,n) for(long int i=0;i<n;i++)
#define FORE(i,n) for(long int i=n;i>=0;i--)
#define TEST long int T;\
cin>>T;
#define FAST ios_base::sync_with_stdio(false);\
cin.tie(NULL);
typedef long int lt;
#define vector(a) vector<int>a;

//yash2322
int main(){
 string s;
 cin>>s;
    lt answer=0,current_index='a';
    FORS(i,s.length()){
        answer+=min(abs(current_index-s[i]),26-abs(current_index-s[i]));
        current_index=s[i];
    }
    cout<<answer;
}
