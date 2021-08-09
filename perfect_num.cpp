/*to check whether a given number is a perfect number*/

#include <iostream>
using namespace std;
int main()
{
   int n,i,sum=0;
   cout<<"enter num:"<<endl;
   cin>>n;
   for(i=1;i<=n;++i)  
   {
      if(n%i==0)
      {
         sum+=i;      
      }
   }
   if(2*n==sum)
   {
      cout<<n<<" is a perfect number\n";
   }
   else
   {
      cout<<n<<" is not a perfect number\n";
   }
   return 0;
}
