#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COUNTER 10

int main()
{
    int randValues, i;
    float percentage;
    srand(time (NULL));
    printf(" Total random number is 10,000\n\n\n");
    for (i = 1; i <= 10; i++)
    {
        randValues = 1 + (int) rand() % 10000;
        percentage = randValues *.01;
        printf(" number of %2ds is: %5d --> %4.2f %.% \n", i, randValues, percentage);
    }
    return 0;
}
