#include <stdio.h>

int main() {
    int score,score1;
    scanf("%d",&score);
    score1=score/10;
    switch(score1)
    {
        case 0:
            printf("F");
            break;
        case 1:
            printf("F");
            break;
        case 2:
            printf("F");
            break;
        case 3:
            printf("F");
            break;
        case 4:
            printf("F");
            break;
        case 5:
            printf("F");
            break;
        case 6:
            printf("D");
            break;
        case 7:
            printf("C");
            break;
        case 8:
            printf("B");
            break;
        case 9:
            printf("A");
            break;
        case 10:
            printf("A");
            break;
        default:
            break;
    }
    return 0;
}
