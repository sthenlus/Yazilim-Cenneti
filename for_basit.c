#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b=0;

    printf("lutfen sayi gir\n");
    scanf("%d",&i);

    for(a=1;a<=i;a++)
    {
       b += a;
    }
    printf("Sonuc %d",b);

    return 0;
}
