/*print fibonacci series from 1 to n*/

#include <iostream>
using namespace std;
int main()
{
   int i, n, arr[100], j, a=0, b=1, c=0;
   cin>>n;
   for(i=0; i<=n; i++)
   {
      arr[i]=i;
   }
   for(j=0; j<=n; j++)
   {
      cout<<arr[j]<<" ";
   }
   cout<<endl;
   cout<<"the fibonacci series is "<<a<<" "<<b<<" ";
   c=a+b;
   while(c<=n)
   {
      cout<<c<<" ";
      a=b;
      b=c;
      c=a+b;
   }
   return 0;
}
