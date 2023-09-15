#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); // Input and output clearance
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int max=v[0];
    int min=v[0];
    for(int i=0;i<n;i++){
        if(min>v[i]){
            min=v[i];
        }
        if(max<v[i]){
            max=v[i];
        }
    }
    cout<<"Maximum is: "<<max<<endl;
    cout<<"Minimum is: "<<min<<endl;
    return 0;
}