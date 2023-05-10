#include <stdio.h>

int main() {
    int N,i,j,k;
    scanf("%d",&N);
    for(k=0;k<N;k++)
    {
        for(i=0;i<N-k;i++)
        {
            if(i<N-k-1)
            {
                printf("a");
            }
            else
            {
                for(j=0;j<=k;j++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
