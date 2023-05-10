#include <stdio.h>

int main() {
    int X,N,a,b,i; int c=0;
    scanf("%d %d",&X,&N);
    for(i=0;i<N;i++) {
        scanf("%d %d", &a, &b);
        c=c+a*b;
    }
    if(c==X)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
