#include <stdio.h>

int main() {
    int year;
    scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100!=0) // 순서가 ||가 먼저여도 연산은 &&가 먼저된다.
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}
