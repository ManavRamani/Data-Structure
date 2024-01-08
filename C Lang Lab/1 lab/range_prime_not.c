//6. wap to check whether a number is prime or not. [A]
#include <stdio.h>
void main()
{
    int i, s, start, end, count = 0;

    printf("Enter start Number : ");
    scanf("%d", &start);
    printf("Enter end Number : ");
    scanf("%d", &end);
    for (s = start; s <= end; s++)
    {
        for (i = 1; i <= s; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d is Prime", n);
        }
        else
        {
            printf("%d is not Prime", n);
        }
    }
}
