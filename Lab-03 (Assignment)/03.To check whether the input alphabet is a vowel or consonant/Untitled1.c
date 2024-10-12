//03.Write a Program To check whether the input alphabet is a vowel or consonant
#include<stdio.h>
int main()
{
    char Character;
    printf("Please input your Character ");
    scanf("%c",&Character);
    if(Character == 'a'||Character =='e'||Character =='i'||Character =='o'||
            Character =='u'||Character =='A'||Character =='E'||Character =='I'||
            Character =='O'||Character =='U')
    {
        printf("\n %c is a vowel Character \n",Character);
    }
    else
    {
        printf("\n %c is a consonant Character \n",Character);
    }

    return 0;
}
