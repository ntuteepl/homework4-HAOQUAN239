#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,a,p;
   int user[6][3]=
            {{123 , 456 , 9000 },
            {456 , 789 , 5000 },
            {789 , 888 , 6000 },
            {336 , 558 , 10000 },
            {775 , 666 , 12000 },
            {566 , 221 , 7000}};
   scanf("%d",&n);



     for(int i=0;i<n;i++){
            scanf("%d%d",&a,&p);
       for(int j=0;j<=6;j++){

        if(user[j][0] == a && user[j][1] == p)
        {
            printf("%d\n",user[j][2]);
            break;
        }
        else if(user[j][0] == a && user[j][1] != p)
        {
            printf("error");
            break;
        }
        if(j==6)
        {
         break;
        }
        }



    }
   }




