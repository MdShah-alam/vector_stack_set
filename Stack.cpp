#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    stack<int>ss;
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        ss.push(s);
    }

    for(int i=0;i<n;i++)
    {
        int x=ss.top();
        cout<<x<<" ";
        ss.pop();
    }
    cout<<endl;
    return 0;
}
