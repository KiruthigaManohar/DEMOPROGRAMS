#include<iostream>
using namespace std;
class A{
    public:
    int n,i,j,m;
    void get()
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
        if(i%2==0)
            m=n/2+1;
        else
            m=n/2;
            for(j=0;j<m;j++)
            {
            cout<<"%"<<" ";
            }
            cout<<"\n";
        }
    }
};
int main()
{
    A a;
    a.get();
    return 0;
}
