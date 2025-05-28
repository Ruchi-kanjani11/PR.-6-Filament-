#include<stdio.h>

int main()
{
    char str[20];
    int i,length=0,x=1;
    printf("Enter any str:");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    for(i=0;i<length/2;i++)
    {
        if(str[i] != str[length-1-i])
        {
            x=0;
            break;
        }
    }
    if(x==1)
    {
        printf("The string is palindrome");
    }
    else
    {
        printf("The string is not palindrome");
    }
    return 0;

}