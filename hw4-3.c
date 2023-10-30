#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c=0;
    int sd[n][2];
    while(scanf("%d",&sd[n][2])!=EOF)
    {
    n++;
    }
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
         {
         if(sd[j][0]>sd[j+1][0]||(sd[j][0]==sd[j+1][0]&&sd[j][1]>sd[j+1][1]))
         {
          int temp1=sd[j][0];
          sd[j][0]=sd[j+1][0];
          sd[j+1][0]=temp1;
          int temp2=sd[j][1];
          sd[j][1]=sd[j+1][1];
          sd[j+1][1]=temp2;
         }
        }
    }
         for(int i=0;i<n;i++)
         {
         t[i][0]=sd[i][0];
         t[i][1]=sd[i][1];
         ]


         for(int i<0;i<n;i++)
         {
            if(sd[i][0]!=0)
            {
              c++;
            }
            int current_time=sd[i][1];

            for(int j=i+1;j<n;j++)
            {
             if(sd[j][0]>=t[i][1])
             {

              current_time=sd[j][1];
             sd[j][0]=0;

             }
            }
           }
          }
          printf("%d\n",c);
          c=0;
           for (int j = i + 1; j < n; j++) {
                if (t[j][0] >= t[i][1]) {
                    // 当前任务可以分配给当前司机
                    printf("%d %d ", t[j][0], t[j][1]);
                    t[i][1] = t[j][1];
                    t[j][0]=0; // 更新当前司机的结束时间
                }
            }
            printf("\n");
        }
    }

    return 0;
}

