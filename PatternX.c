#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int bs = n;
    int np=n/2;
    int h = (n + 1) / 2;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == h && i == h)
            {
                printf("X");
            }
            else if (j == i)
            {
                printf("\\");
            }
            else if (j == bs)
            {
                printf("/");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        bs--;
    }
    int fr=np;
    int bs2= np+2;
    for (int i = 1; i <= np; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if (j==fr)
            {
                printf("/");
            }
            else if (j==bs2)
            {
                printf("\\");
            }
            else{
                printf("*");
            }
            
            
        }
        fr--;
        bs2++;
        printf("\n");
        
    }
    

    return 0;
}
