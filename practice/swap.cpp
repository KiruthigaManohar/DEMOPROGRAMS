#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    void get()
    {
        cin>>a>>b;
        a=a*b;
        b=a/b;
        a=a/b;
        cout<<a<<" "<<b;
    }
};
int main()
{
    A a;
    a.get();
    return 0;
}
