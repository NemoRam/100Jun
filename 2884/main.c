#include <stdio.h>

int main() {
    int H,M;
    scanf("%d %d",&H,&M);
    if(H==0)
    {
        if(M>=45)
        {
            printf("0 %d",M-45);
        }
        else
        {
            printf("23 %d",M+15);
        }
    }
    else
    {
        if(M>=45)
        {
            printf("%d %d",H,M-45);
        }
        else
        {
            printf("%d %d",H-1,M+15);
        }
    }
    return 0;
}
