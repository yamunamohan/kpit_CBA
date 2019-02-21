#include <stdio.h>
#include <stdlib.h>
int **dyno();
void pattern(int**);
int main()
{
    int i,j;
    int **s=dyno();
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",*(*(s+i)+j));
            // printf("%d ",(*(s+i)+j));
        }
        printf("\n");
    }
    pattern(s);

    return 0;
}
int **dyno()

{
    //int **ptr;
    int i,k=1,j,o,p,k,qm,r,d,t;
    int **ptr=(int**)malloc(10*sizeof(int*));
    For(i=0;i<10;i++)
    {
        ptr[i]=(int*)malloc(5*sizeof(int));
    }
    //printf("%d",sizeof(ptr));
    for(i=0;i<10;i++)
    {
       (j=0;j<5;j++)
        {
            *(*(ptr+i)+j)=k;
            //printf("%d",*(*(ptr+i)+j));
        }
        k++;
    }

  return ptr;
}
void pattern(int** a)
{
    int i,j=0,l=1;
    for(i=0;i<10;i++)
    {
        if(*(*(a+i)+j)<=5)
        {
            while(a[i][j])
        {
            printf("*");
            a[i][j]--;
        }
        printf("\n");
        }
        else
        {
            while(a[i][j]-l)
            {
                printf("*");
                a[i][j]--;
            }
            l=l+2;
            printf("\n");
        }
    }
}
