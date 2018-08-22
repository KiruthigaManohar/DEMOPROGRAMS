#include<iostream>
using namespace std;
class sum
{
    public:
    int n,l=1,p=1,i;
    float sum1=0.0,s1;
    void get()
    {
        cin>>n;
       while(l<=n)
       {
           p=1;
           for(i=0;i<l;i++)
           {
               p=p*l;
           }
           l++;
           s1=1.0/p;
           sum1=sum1+s1;
       }
       cout<<sum1;
    }
};
int main()
{
    sum s;
    s.get();
    return 0;
}
