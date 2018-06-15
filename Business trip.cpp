#include<stdio.h>
int main()

{
    int n,i,j,temp=0,count=0,sum=0;
    char c[15];
    scanf("%d", &n);
    for(i=0; i<12; i++)
    {
        scanf("%d", &c[i] );
    }
    for(i=0; i<12; i++)
    {
        for(j=0; j<i; j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }

    for(i=0; i<12; i++)
    {

        sum+=c[i];
        count++;

        if(sum>=n)
            break;

    }
    if(n==0)
    {
        count=0;
    }

  //  printf("%d", count);
    if(sum<n)
        printf("-1");
    else
        printf("%d", count);



}
