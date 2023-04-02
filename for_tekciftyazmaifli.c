#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    for(a=0;a<=10;a++)
    {
        if (a%2 == 0)
        {
            printf("%d cifttir\n",a);
        }
        else
        {
            printf("%d tektir\n",a);
        }
    }


    return 0;
}
