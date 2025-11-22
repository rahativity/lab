#include<bits/stdc++.h>
using namespace std;
int linear(vector<int>v,int n,int tar)
{
    for(int i=0; i<n; i++)
    {
        if(v[i]==tar)
            return i;
    }
     return -1;
}
int main()
{
    int n,tar;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    cin>>tar;
    int res=linear(v,n,tar);
    if(res==-1)
        cout<<"Target not found"<<endl;
    else
         cout<<"Target "<<tar<<" was found at index "<<res<<endl;

    return 0;
}

