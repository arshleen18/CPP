/*find the highest, lower and lowest number*/

#include<iostream>
using namespace std;
int main()
{
   int a, b, c, max, mid, min;
   cout<<"enter a, b, c\n";
   cin>>a>>b>>c;
   if (a>b && a>c)
   {
      max = a;
      if (b>c)
      {
         mid = b;
         min = c;
      }
      else
      {
         mid = c;
         min = b;
      }
   }
   else if (b>a && b>c)
   {
      max = b;
      if(a>c)
      {
         mid = a;
         min = c;
      }
      else
      {
         mid = c;
         min = a;
      }
   }
   else
   {
      max = c;
      if(a>b)
      {
         mid = a;
         min = b;
      }
      else
      {
         mid = b;
         min = a;
      }
   }
   cout<<"max\n"<<max;
   cout<<"\nmid\n"<<mid;
   cout<<"\nmin\n"<<min;
   return 0;
}
