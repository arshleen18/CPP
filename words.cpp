/*how many words,letters and special char are there in the string*/

#include <iostream>
#include<string>
using namespace std;
int main()
{
   string str="how are   you   doing";
   int space=0,letter=0,charac=0;
   for(int i=0;str[i]!='\0';i++){
      if(str[i]==' '){
         if(str[i-1]!=' ')
         space++;
      }
      else if(str[i]>='A' && str[i]<='Z')
      letter++;
      else if (str[i]>='a' && str[i]<='z')
      letter++;
      else
      charac++;
   }
   cout<<"there are "<<space+1<<" words"<<endl;
   cout<<"there are "<<letter<<" letters"<<endl;
   cout<<"ther are "<<charac<<" special characters";
}
