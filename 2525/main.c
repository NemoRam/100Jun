#include <stdio.h>

int main() {
    int A,B,C;
    scanf("%d %d",&A,&B);
    scanf("%d",&C);
    if(B+C>=60)
    {
        if(A+((B+C)/60)<24)
        {
            printf("%d %d",A+(B+C)/60,(B+C)%60);
        }
        else
        {
            printf("%d %d",(A+(B+C)/60)-24,(B+C)%60);
        }

    }
    else
    {
        printf("%d %d",A,B+C);
    }
    return 0;
}
