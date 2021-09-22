/*sort given numbers in ascending order*/

#include <iostream>
using namespace std;
int main()
{
   int arr[10];
   for(int i=0;i<10;i++)
   {
      cout<<"enter arr["<<i<<"]";
      cin>>arr[i];
   }
   for (int i = 0; i < 10-1; i++)
   {
      for(int j=i+1; j<10; j++)
      {
         if (arr[j]<arr[i])
         {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
         
      }
   }
   cout<<"the sorted array is"<<endl;
   for(int i=0;i<10;i++)
   {
      cout<<arr[i]<<endl;
   }
   return 0;
}
