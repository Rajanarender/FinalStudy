#include<stdio.h>
#include<string.h>

int main()
{
    const char s[100]="Global Edge bad is a MNC Global Edge is locatediin in Tech Park Tech Park is Good";
    int j,i,k,wc=0; 

    for(i=0;s[i] != '\0';i++)
    {
        
        if(s[i] != ' ')
        {
         k++;
        }
        else 
         {
             if(wc < k)
             {
                 printf("%c\t",s[i-k+wc]);
                 k=0;
             }
             else if(k > wc)
             {
                 printf("*\t");
                 k=0;
             }
             else
             {
                 printf("*\t");
                 k=0;
             }
             wc++;
             
         }

   }


}
