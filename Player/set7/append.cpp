#include<iostream>
#include<string.h>
using namespace std;
class append
{
    private:
        char str[1000],str1[100];
        int i,l,j,m,n;
        public:
        void get()
        {
        cin>>str>>str1;
        l=strlen(str);
        m=strlen(str1);
        str[l]=' ';
        for(i=l+1,j=0;str1[j]!='\0';i++,j++)
        {
            str[i]=str1[j];
        }
        cout<<str;
       
        /*strcat(str,str1);
        cout<<str;
        */
    }
};
int main()
{
    append a;
    a.get();
    return 0;
}
