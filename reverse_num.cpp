/*to reverse a given number*/

#include <iostream>
using namespace std;
int main()
{
   int n,i;
   cout<<"enter num:"<<endl;
   cin>>n;
   while (n>0)
   {
      i=n%10;
      n/=10;
      cout<<i;
   }
   return 0;
}
