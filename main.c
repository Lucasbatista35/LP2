#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Palindromo(char strings[])
{

    int l = 0;
    int h = strlen(strings) - 1;


    while (h > l)
    {
        if (strings[l++] == strings[h--])
        {
            printf("%s\n",strings);
            return;
        }
    }

}

int main()
{
    int x,i,j,k,num;
    num=0;

    scanf("%d",&x);

    if (x>=0)
    {
        char strings[x][81];
        char key[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        int frequencia[25];

        for(k=0;k<=25;k++)
    {
        frequencia[k]=0;
    }
    for(i=0;i<x;i++)
    {

        scanf("%s",&strings[i]);
        strlwr(strings[i]);
    }
    for(i=0;i<x;i++)
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
        if(frequencia[k]!= 0)
        {
             printf("%c:%d\n",key[k],frequencia[k]);
        }

    }



    for(i=0;i<x;i++)
    {
        Palindromo(strings[i]);
    }
    }

   return 0;
}
