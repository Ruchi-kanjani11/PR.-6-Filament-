#include<stdio.h>

int main()
{
    char str[20];

    printf("Enter your str:");
    gets(str);

    for(int i=0;str[i]!='\0';i++)
    {
        int count = 0;
        int isReperted = 0;
        char repertCh = str[i];
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i] == str[j])
            {
                count++; 
                
            }
            if(repertCh == str[j] && j<i)
            {
                isReperted = 1;
                break;
            }
        }
        if(isReperted==0)
            {printf("%c => %d\n",str[i],count);}
        

    }
    return 0;
}