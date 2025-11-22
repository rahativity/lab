#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>v,int len,int tar)
{
    int st=0,en=len-1;
    while(st<=en)
    {
        int mid=(st+en)/2;
        if(tar>v[mid])
            st=mid+1;
        else if(tar<v[mid])
            en=mid-1;
        else
            return mid;
    }
    return -1;
}
int main()
{
    int len,tar,res;
    cout<<"Enter the length of the Array: ";
    cin>>len;
    vector<int>v(len);
    cout<<"Enter the numbers: ";
    for(int i=0; i<len; i++)
    {
        cin>>v[i];
    }
    cout<<"Enter the Target: ";
    cin>>tar;
    res=BinarySearch(v,len,tar);
    if(res==-1)
        cout<<"The Target is not in the array"<<endl;
    else
        cout<<"The Target "<<tar<<" was found at index: "<<res<<endl;
    return 0;

}
