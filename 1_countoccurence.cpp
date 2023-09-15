#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); // Input and output clearance
    cin.tie(0);
    string s;
    cin>>s;
    char c;
    cin>>c;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
         count++;
        }
    }
    cout<<count<<endl;
    return 0;
}