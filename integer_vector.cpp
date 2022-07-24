#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>vc;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        vc.push_back(a);
    }
    for(int i=0; i<n; i++)
    {
        cout<<vc[i]<<" ";
    }
    cout<<endl;
    sort(vc.begin(),vc.end());

    for(int i=0; i<n; i++)
    {
        cout<<vc[i]<<" ";
    }
    cout<<endl;

    sort(vc.rbegin(),vc.rend());
    for(int i=0; i<n; i++)
    {
        cout<<vc[i]<<" ";
    }
    cout<<endl;

    return 0;
}
