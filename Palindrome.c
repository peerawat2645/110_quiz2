#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c,i;
    unsigned int n,y=0;
    scanf("%u",&n);
    for(i=1;i<n;i++)
    {
        a=i;
        b=0;
        while(a){
            c=a%10;
            a/=10;
            b=b*10+c;
        }
        if(i==b)
            y++;

    }
    printf("%u",y);

}
