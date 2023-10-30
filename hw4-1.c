#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c;

    scanf("%d",&n);
    int a[n];
    for(int i=0; i < n;i++)
    {
        scanf("%d",&a[i]);
        for(c=2;c<a[i];c++){
            if(a[i]%c==0){
                printf("NO ");
                break;
            }
        }
            if(c==a[i]){
                printf("YES ");
            }

            if(a[i]<2){
                printf("NO ");
            }
    }
    return 0;
}

