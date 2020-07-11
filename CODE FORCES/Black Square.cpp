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
    vector(four);
    lt answer=0;
    FORS(i,4){
        lt input;
        cin>>input;
        four.push_back(input);
    }
    cin.ignore();
    string s;
    cin>>s;
    FORS(i,s.length()){
        int index=s[i]-'0';
        answer+=four[index-1];
    }
    cout<<answer;
}
