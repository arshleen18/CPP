/*sum of first and last digit of a number*/

#include <iostream>
using namespace std;
int main()
{
   int t=0,n,i,j,sum=0,m,r;
   cout<<"enter num: ";
   cin>>n;
   m=n;
   while (m!=0)
   {
      m=m/10;
      t++;
   }
   cout<<t<<endl;

   j=n%10;
   sum=j;
   for (i = 0; i < t; i++)
   {
      r=n%10;
      n/=10;
   }
   sum+=r;
   cout<<"the sum is "<<sum;

   return 0;
}
