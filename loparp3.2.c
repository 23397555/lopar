#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a num: ");
    scanf("%d", &num);

    do
    {
        count++;
        num = num / 10;
    }while(num > 0);

    printf("total numbers of digits: %d", count);
    
    return 0;
}
