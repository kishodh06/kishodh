#include <stdio.h>
int main() {  
    char character;
    printf("Enter a Character\n");  
    scanf("%c", &character);  
    if((character >= 'a' && character <= 'z')||(character >= 'A' && character <= 'Z'))
    {
        printf("%c is an Alphabet\n", character);  
    }
    else
    {  
        printf("%c is Not an Alphabet\n", character);  
    }
    return 0;  
}
