// Accept on character from user and check whether thwt character is vowel (a,e,i,o,u) or not.

#include<stdio.h>
#include<stdbool.h>

# define TRUE 1
# define FALSE 0

bool ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return FALSE;
    }
    else
    {
        return TRUE;

    }
}

int main()
{
    char cValue = '\0';
    bool  bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);
    bRet = ChkVowel(cValue);

    if(bRet == 0)
    {
        printf("It is Vowel");
    }
    else{
        printf("It is not Vowel");
    }

    return 0;

}