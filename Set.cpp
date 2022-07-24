#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int>ss;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        ss.insert(a);
    }


    cout<<ss.size()<<endl;
    return 0;
}
