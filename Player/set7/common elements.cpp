#include<iostream>
using namespace std;
class get
{
	private:
		int a[100],i,n,j,b[100],count;
		public:
			void array()
			{
				cin>>n;
				for(i=0;i<n;i++)
				{
					cin>>a[i];
				}
					for(i=0;i<n;i++)
					cin>>b[i];
				for(i=0;i<n;i++)
				{
					count=0;
					for(j=0;j<n;j++)
					{
						if(a[i]==b[j])
						count++;
					}
				
					if(count!=0)
					   cout<<"\t"<<a[i];
					
				}
		}
};
int main()
{
	get g;
	g.array();
	return 0;
}
