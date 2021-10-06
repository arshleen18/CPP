/*string is palindrome or not*/

#include <iostream>
#include<string>
using namespace std;
int main()
{
   bool pal;
   string s;
   cin>>s;
   string rev;
   string::reverse_iterator it;
   for(it=s.rbegin();it!=s.rend();it++){

      rev+=*it;
   }
   for(int j=0;j<s.length();j++){
      if(s[j]-rev[j]==32 || s[j]-rev[j]==-32){
         rev[j]=s[j];
      }
   }
   
   for(int i=0;i<s.length();i++){
      if(s[i]==rev[i])
      pal=true;
      else{
         pal=false;
         break;
      }
   }
   if(pal){
      cout<<"palindrome";
   }
   else{
      cout<<"not a palindrome";
   }
}
