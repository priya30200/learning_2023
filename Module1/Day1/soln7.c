//L2 /3. Write a function to find if a give character is vowel using switch case statements, 
   //  If vowel, return 1
   // If not vowel, return 0;

   //In main print,
  //"Vowel" if return value is 1
 //"Not Vowel" if return value is 1//

#include <stdio.h>
int Vowel(char ch) 
{
    switch (ch)
     {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
        default:
            return 0;
    }
}

int main()
 {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (Vowel(ch)) 
    {
        printf("Character %c is a Vowel\n",ch);
    } else 
    {
        printf("Character %c Not a Vowel\n",ch);
    }
    return 0;
}
