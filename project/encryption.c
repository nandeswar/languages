#include <stdio.h> 
int main() 
{ 
   char s[100],a[10][10]; 
   int k=1,i;
   printf("enter a any message:");
   scanf("%[^\n]%*c", s);
   for(i=0; s[i]!= '\0'; i++)
   {
       printf("%c", s[i]);
       //a[i] = s[i];
       if(6*k-1==i) 
       {
           printf("\n");
           k=k+1;    
        }
   }
   //printf("%s", a[i]);
       return 0; 
} 