#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }

};
int main()
{
    myStack st;
    int len;
    cout<<"Enter the Length: ";
    cin>>len;
    vector<int>v(len);
    for(int i =0; i<len; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    cout<<"The size of the stack: "<<st.size()<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
