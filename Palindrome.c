#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c,i,n,y=0;
    scanf("%d",&n);
    if(n>=1&&n<=1000000)
    {
        for(i=1; i<=n; i++)
        {
            a=i;
            b=0;
            while(a!=0)
            {
                c=a%10;
                a/=10;
                b=b*10+c;
            }
            if(i==b)
                y++;

        }
        printf("%d",y);
    }
}
