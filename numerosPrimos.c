#include <stdio.h>

int main(void)
{
    int j, i = 101, primos_index = 0, primos[100], count = 0;

    while (primos_index < 100)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
            if (count > 2)
            {
                break;
            }
        }

        if(count == 2)
        {
            primos[primos_index] = i;
            primos_index++;
        }

        i++;
    }

    for (j = 1; j < primos_index; j++)
    {
        printf("%d ", primos[j]);
    }
}