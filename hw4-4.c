#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,max,x=0,y=0,c=0,maxx,maxy;

   scanf("%d",&n);
   int a[n][n];


   for(int y=0;y<n;y++){
       for(int x=0;x<n;x++){
        scanf("%d",&a[y][x]);
       }
   }

        for(c=0;c<n;c++){

            for( x=0;x<n;x++){
                for( y=0;y<n;y++){
                if(a[y][x]>max){
                    max=a[y][x];
                    maxx=x;
                    maxy=y;
                }
                }
            }
                printf("boy %d pair with girl %d\n",maxy+1,maxx+1);
                for(int k=0;k<=n;k++)
                {
                    a[k][maxx]=0;
                    a[maxy][k]=0;
                }
          max=0;


        }
}


