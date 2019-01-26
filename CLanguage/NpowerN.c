#include <stdio.h>

int main(void)
{
     int Term,TermCounter, Counter, TermCount = 2, TotalTerms;
  printf("Enter the number of terms in the series 1, 4, 27, ... :");
  scanf("%d", &TotalTerms);
  if(TotalTerms == 1)
   {
   printf("The first one term in the series is 1");
   }
   else
   {
     printf("The first %d  terms in the series are 1",TotalTerms);
      for(TermCounter = 1; TermCounter < TotalTerms; TermCounter ++)
      {
        Term = 1;
          for(Counter = 1; Counter <= TermCount; Counter ++)
          {
             Term = Term * TermCount;
          }
          printf(", %d",Term);
          TermCount = TermCount + 1;
      }
      printf(".");
   }
  return 0;
}