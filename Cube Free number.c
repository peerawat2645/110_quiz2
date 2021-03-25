#include <stdio.h>
int a[1000001]={0};
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for(i=2;i<100;i++){
        if(a[i]==0){
            k=i*i*i;
            for(j=k;j<=1000000;j+=k){
                a[j]=1;
            }
        }
    }
    k=1;
    for(i=1;i<=1000000;i++)
    {
        if(a[i]==0)
            a[i]=k++;
    }

    if(n==1)
        printf("1");
    else if(a[n]!=1)
        printf("%d",a[n]);
    else
        printf("Not Cube Free");

}
