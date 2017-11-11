#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,k;
    char strings[3][81];
    char key[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int frequencia[25];
    for(k=0;k<=25;k++)
    {
        frequencia[k]=0;
    }
    for(i=0;i<3;i++)
    {

        scanf("%s",&strings[i]);
        strlwr(strings[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<strlen(strings[i]);j++)
        {
            for(k=0;k<=25;k++)
            {
                if(strings[i][j]==key[k])
                {
                    frequencia[k]++;
                }
            }
        }
    }
    for(k=0;k<=25;k++)
    {
        printf("%c:%d\n",key[k],frequencia[k]);
    }

    return 0;

}

