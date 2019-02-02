#include <stdio.h>

  int asciiToBinary(int input) {
        int result = 0, i = 1, remainder;

        /* convert decimal to binary format */
        while (input > 0) {
                remainder = input % 2;
                result = result + (i * remainder);
                input = input / 2;
                i = i * 10;
        }

        /* print the resultant binary value */
        return(result);
  }
  int toascii(char ch){
int a=ch;
return a;
}

  int main() {
        int ch = 'a';
        printf("\tCharacter  ASCII  Binary\n");
        while (ch <= 'z') {
                printf("\t%c\t%6d\t%d\n", ch,
                        toascii(ch), asciiToBinary(toascii(ch)));
                ch++;
        }
        return 0;
  }