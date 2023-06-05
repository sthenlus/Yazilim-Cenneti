#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[3][4]={{1,5,8,3},{6,8,3,4},{9,5,2,5}};
    int dizi2[3][4]={{6,5,3,3},{7,8,2,4},{5,2,4,8}};
    int toplam[3][4];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%4d",toplam[i][j]);
        }
        printf("\n");
    }
    return 0;
}
