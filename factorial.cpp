/*to find factorial of a num*/

#include <iostream>
using namespace std;
int main()
{
   int fac=1,n,i;
   cout<<"enter num:"<<endl;
   cin>>n;
   for(i=1;i<=n;i++)
   {
      cout<<fac;
      fac*=i;
      cout<<" X "<<i<<" = "<<fac<<endl;
   }
   cout<<"the factorial is "<<fac;
   return 0;
}
