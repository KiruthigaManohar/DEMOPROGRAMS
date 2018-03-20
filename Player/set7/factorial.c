#include<iostream>
using namespace std;
class factorial
{
public:
int n,f=1,i;
void get()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
   
    cout<<f;
    }   
};
int main()
{
    factorial ft;
    ft.get();
    return 0;
   
}
