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
            printf("%s",strings);
            return;
        }
    }

}

int main()
{
    int x,i,num;
    num=0;

    scanf("%d",&x);

    if (x>=0)
    {
       char strings[x][81];

        for(i=0;i<x;i++)
        {
            scanf("\n%s",strings[i]);
            strupr(strings[i]);
            printf("%s\n%d\n",strings[i],strlen(strings[i]));
        }

        for(i=0;i<x;i++)
        {
            Palindromo(strings[i]);
        }
    }

   return 0;
}
