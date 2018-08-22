#include<iostream>
#include<string.h>
using namespace std;
class sample
{
    public:
    int h1,h2,h3,m1,m2,m3,s1,s2,s3;
    void get()
    {
        cin>>h1>>m1>>s1;
        cin>>h2>>m2>>s2;
        s3=s1+s2;
        if(s3>60)
        {
            s3=s3-60;
            m1=m1+1;
        }
        else if(s3==60)
        s3=1;
        
        m3=m1+m2;
        if(m3>60)
        {
            m3=m3-60;
            h1=h1+1;
        }
        else if(m3==60)
        m3=1;
        h3=h1+h2;
        cout<<h3<<":"<<m3<<":"<<s3;
        
        
    }
};
int main()
{
    sample ix;
    ix.get();
    return 0;
}
