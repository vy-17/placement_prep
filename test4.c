#include<stdio.h>
#include<string.h>
void main()
{
   char str1[30],str2[30],str[30],str3[30];
   int i,j,k,f=0,flag=0;
   printf("\nEnter the 1st string:");
   gets(str1);
   printf("\nEnter the 2nd string:");
   gets(str2);
   j=0;
   for(i=0;str1[i]!='\0';i++)
   {
      if(isupper(str1[i]))
       {
        str[j]=tolower(str1[i]);
        j++;
        }
      else
       if(islower(str1[i]))
       {
        str[j]=str1[i];
        j++;
        }
       else
         continue;
         
        
   }
   str[j]='\0'; 
   for(i=0,k=0;str2[i]!='\0';i++)
   {
      if(isupper(str2[i]))
      {
        str3[k]=tolower(str2[i]);
        k++;
        }
      else
       if(islower(str2[i]))
       {
         str3[k]=str2[i];
         k++;
        }
      else 
         continue;
        
   } 
  str3[k]='\0';
   puts(str);
   puts(str3);
    
   for(i=0;str[i]!='\0';i++)
   {  
      f=0;
      for(j=0;str3[j]!='\0';j++)
      {
         if(str[i]==str3[j])
         {
            if(f==0)
             {
                str3[j]='1';
                f=1;
             }
         }
      }  
   }
 puts(str3); 
 
 if(str[i]=='\0')
 {
    for(j=0;str3[j]!='\0';j++)
    {
       if(str3[j]!='1')
       {
         flag=1;
         break;
         }           
    }
 }
 if(flag==0)
    printf("\nString is anagrams");
 else
    printf("\nString is not anagrams");
 
 
}
