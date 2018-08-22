#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class sorting
{
    public:
    int a[100],i,n;
    void s()
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
       sort(a,a+n);
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        sort(a,a+n,greater<int>());
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
};
int main()
{
    sorting s1;
    s1.s();
    return 0;
}
