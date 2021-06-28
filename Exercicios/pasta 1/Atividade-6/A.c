#include <stdio.h>

int main(){
    int i, num[10];

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]); 
    }
    printf("---------------------\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]); 
    }

    return 0;
}