#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char slice[10][6];
    char key[5];
    char cipher[10];
    char plaintext[10][10];
    int i=0,j=0,k=0, x,Length;
    printf("Enter your string: ");
    scanf ("%[^\n]%*c", str);
    Length = strlen(str);
    printf("\nThe given string is: ");
    for(i=0; i < Length; i++){
        printf("%c",str[i]);
    }
    
    x = Length % 6;
    
    for(i = 0; i < ((Length/6) + x) ; i++) {
        for(j = 0; j < 6; j++) {
            slice[i][j] = str[k];
            k++;
            if(k > Length) {
                break;
            }
        }
    }
    printf("\nThe slices are\n");
    for(i = 0; i < ((Length/6) + x) ; i++)
    {
        for(j = 0; j < 6; j++) {
            printf("%c", slice[i][j]);
        }
        printf("\n");
    }
    printf("enter the three letter word for key\n");
    scanf("%[^\n]%*c",key);
    i=0;
    for (j=0;j<3;j++)
    {
    char temp = slice[i][j]^key[i];
     cipher[j] = temp;
     printf("%X ", cipher[j]);
 }
   for (j=3;j<6;j++){
      char temp = cipher[i] ^ slice[i][j];
       cipher[j] = temp;
        printf("%X ", cipher[j]);
   }
   printf("\n");
    
   printf("The decryption of cipher text :");
   for (j=0;j<6;j++)
       printf("%C ", cipher[j]);
   //printf("\n");
   printf(" and The plaintext :");
    for(j = 0; j < 6; j++) {
            printf("%c", str[j]);
        }
   printf("\n");
   printf("the plaintext is is bellow after decryption:\n");
   for (j=0; j<6; j++){
   char temp = str[j] ^ cipher[j];
   plaintext[i][j] = temp;
   printf("%c", plaintext[i][j]);
   }
    printf("\n");
   return 0;
}
