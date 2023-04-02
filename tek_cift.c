#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Lutfen 1 adet sayi giriniz\n");
    scanf("%d",&a);


    if(a%2 == 0)
    {
        printf("%d sayisi cifttir",a);
    }

    else
    {
        printf("%d sayisi tektir",a);
    }

    return 0;
}
