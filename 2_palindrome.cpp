#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); // Input and output clearance
    cin.tie(0);
    string s;
    cin>>s;
    int flag;
    int a=s.size();
    for(int i=0;i<a/2;i++){
        if(s[i]!=s[a-i-1]){
            flag=0;
            break;
        }
        flag=1;
    }
    (flag==0)?cout<<"false"<<endl:cout<<"true"<<endl;
    return 0;
}