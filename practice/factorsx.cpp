# include<iostream>
using namespace std;
int main()
{
    int a,n,c=0,r,i=2,j;
    cin>>n;
    a=n;
   while(i<=n)
    {
        r=a%i;
       if(r==0)
        {
            if(c==0)
            {
              cout<<i;
             c=1;
            }
             else
             {
             cout<<"x"<<i;
               
             }
             	a=a/i;
        }
        else
        {
        	i++;
        
		}
	
    }
}
