#include <stdio.h>

int main(void)
{
    int Numbers[10], Maximum, Counter = 0;
  printf("Enter the ten numbers you want to print maximum, enter the first number:\n");
  scanf("%d",&Numbers[Counter]);
  for(Counter = 1; Counter < 10; Counter++)
  {
  printf("Enter the next number:");
    scanf("%d", &Numbers[Counter]);
}
  Maximum = Numbers[0];
  for(Counter = 1; Counter < 10; Counter++)
  {
      if(Numbers[Counter] > Maximum)
      {
         Maximum  = Numbers[Counter];
      }
  }
  printf("%d is the maximum number of", Maximum);
  for(Counter = 0; Counter < 10; Counter++)
  {
      printf(" %d", Numbers[Counter]);
  }
  printf(".");
  return 0;
}