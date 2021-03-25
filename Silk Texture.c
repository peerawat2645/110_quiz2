#include <stdio.h>
int main(){
    int n,m,p,q,r,i,j;
    scanf("%d %d",&n,&m);
    char co[n][71];
    for(i=0;i<n;i++)
        for(j=0;j<70;j++)
            co[i][j]='o';
    for(i=0;i<m;i++)
    {
        scanf("%d %d %d",&p,&q,&r);
        if((p>=1&&p<=n)&&(q>=1&&q<=70)&&(r>=1&&r<=(70-q+1))){
            for(j=0;j<r;j++,q++)
            co[p-1][q-1]='x';
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<71;j++)
            printf("%c",co[i][j]);
        printf("\n");
    }

    return 0;
}
