//to display number in words

#include <iostream>
using namespace std;
int main()
{
   int rev=0,m=0,n,i;
   cout<<"enter num:"<<endl;
   cin>>n;
   while (n!=0)
   {
      i=n%10;
      n/=10;
      rev=rev*10+i;
   }
   while (rev !=0)
   {
      n=rev%10;
      rev/=10;
      m=m*10+n;
      switch (n)
      {
      case 1:
         cout<<" one ";
         break;
      
      case 2:
         cout<<" two ";
         break;

      case 3:
         cout<<" three ";
         break;
      
      case 4:
         cout<<" four ";
         break;

      case 5:
         cout<<" five ";
         break;

      case 6:
         cout<<" six ";
         break;

      case 7:
         cout<<" seven ";
         break;

      case 8:
         cout<<" eight ";
         break;

      case 9:
         cout<<" nine ";
         break;
      }
   }
   
   return 0;
}
