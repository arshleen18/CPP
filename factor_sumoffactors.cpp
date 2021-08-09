/*to find the factors of a number and also the sum of the factors*/

#include <iostream>
using namespace std;
int main()
{
   int j,n,i,sum=0;
   cout<<"enter num:"<<endl;
   cin>>n;
   for(i=1;i<=n;++i)  
   {
      if(n%i==0)
      {
         cout<<i<<" is a factor of "<<n<<endl;
      }
   }
   for(i=1;i<=n;++i)  
   {
      if(n%i==0)
      {
         sum+=i;
      }
   }
   cout<<"the sum is "<<sum;

   return 0;
}
