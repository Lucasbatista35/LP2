#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,k;
    int cont = 0;
    char strings[3][11];
    char key[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int frequencia[25];
    for(i=0;i<3;i++)
    {
        scanf("%s",&strings[i]);
        strupr(strings[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<=strlen(strings[i]);j++)
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

