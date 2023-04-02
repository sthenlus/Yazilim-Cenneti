#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Lutfen 3 adet sayi giriniz\n");
    scanf("%d%d%d",&a,&b,&c);


    if(a>b && a>c)
    {
        printf("%d sayisi en buyuktur",a);
    }

    if(b>a && b>c)
    {
        printf("%d sayisi en buyuktur",b);
    }

    if(c>b && c>a)
    {
        printf("%d sayisi en buyuktur",c);
    }
    
    if(a==b && a==c)
    {
        printf("Hepsi birbirine esittir");
    }
