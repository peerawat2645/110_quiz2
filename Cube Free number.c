#include <stdio.h>
int check(int n){
    int i;
    if(n==1)
        return 1;
    for(i=2;i*i*i<=n;i++)
        if(n%(i*i*i)==0)
            return 0;
    return 1;
}
void cfree(int n){
    int i;
    for(i=1;i<=n;i++){
        if(check(i))
            printf("%d",i);
        else
            printf("Not Cube Free");
    }
}
int main(){
    int n,i,j,k=0,a,c;
    int b[1000];
    scanf("%d",&n);
    cfree(n);

}
