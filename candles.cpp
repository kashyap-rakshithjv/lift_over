#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n,h,num=0;
    scanf("%d\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d\t",h);
        if(h>num)
            num=h;
    }
    printf("%d",num);
    return 0;
}

