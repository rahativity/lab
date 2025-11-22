#include<bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int>&v, int len)
{
    for(int i=0; i<len-1; i++)
    {
        for(int j=0; j<len-i-1; j++)
        {
            if(v[j]>v[j+1])
                swap(v[j],v[j+1]);
        }
    }
}
void display(vector<int>v,int len)
{
    for(int i=0; i<len; i++)
        cout<<v[i]<<" ";
}
int main()
{

    int len;
    cout<<"Enter the length of the Array: ";
    cin>>len;
    vector<int>v(len);
    cout<<"Enter the Array: ";
    for(int i=0; i<len; i++)
        cin>>v[i];
    cout<<"Array after sorting: ";
    BubbleSort(v,len);
    display(v,len);
    return 0;
}


