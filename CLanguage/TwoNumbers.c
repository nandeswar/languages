#include <stdio.h>

int main(void)
{
    int Sum, Product, Counter = 2, NumberOne, NumberTwo, Count = 0;
 printf("Enter the sum and product of the two numbers:");
 scanf("%d%d", &Sum, &Product);
 while(Count != 1)
 {
    if(Product % Counter == 0)
    {
       NumberOne = Product / Counter;
       if(NumberOne <= Sum)
       {
           NumberTwo = Sum - NumberOne;
           if(Product == NumberOne * NumberTwo)
           {
              Count = 1;
           }
       }
    }
    Counter = Counter + 1;
 }
if(Count == 1)
{
printf("The sum %d and product %d of the numbers are %d and %d.", Sum, Product, NumberOne,NumberTwo);
}
return 0;
}