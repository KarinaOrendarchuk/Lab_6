#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int n=20, Low=-100, High=100; 
int k = 0;
int i = 0;
int j = 0;
int min=0;
int min_i=0;
int sum=0;

int sum_k(int n, int k, int a[n])
{

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            k++;
        }
    }
printf("k = %d\n", k);
}

int summ(int min, int min_i, int sum, int n, int a[n])
{

    for (int i = 0; i < n; i++)
    {
        if (min >= a[i])
        {
            min = a[i];
            min_i = i;
        }
    }
            for (int i = min_i; i < n; i++)
            {
                sum += a[i];
            }
printf("sum = %d\n", sum);
}

int main(void)
{

int a[n];
srand(time(0));
for (int i=0; i<n; i++)
a[i]=Low + rand() % (High - Low + 1);

for (int i=0; i<n; i++)
    printf("a[%d] = %d\n", i, a[i]);printf("\n");

sum_k(n, k, a);
summ(min, min_i, sum, n, a);

    return 0;
}