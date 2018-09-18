#include<stdio.h>
int main()
{

    int i,n,t1=0,t2=1,nt;
    printf("enter  n \n");
    scanf("%d",&n);
    printf("finonacci series for n numbers\n");
    for(i=0;1<n;i++)
    {
        if(i<=1)
            nt=i;
        else
        {
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
    printf("%d\n",nt);
    }
    return 0;
}
