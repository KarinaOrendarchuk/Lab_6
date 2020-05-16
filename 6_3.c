#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int n=20, Low=-100, High=100; 
int k = 0;
int i = 0;
int j = 0;

int max(int n, int a[]) {
int max=a[0];
for (int i=0; i<n; i++)
{

    if (max < a[i])
    {
        max=a[i];
    }
}return max;
}

int min(int n, int a[]) {
int min=a[0];
for (int i=0; i<n; i++)
{

    if (min > a[i])
    {
        min=a[i];
    }
}return min;
}

int main(void)
{

int a[n];
srand(time(0));
for (int i=0; i<n; i++)
a[i]=Low + rand() % (High - Low + 1);

for (int i=0; i<n; i++)
    printf("a[%d] = %d\n", i, a[i]);printf("\n");

printf("Максимальний елемент масиву: %d\n", max(n, a));
printf("Мінімальний елемент масиву: %d\n", min(n, a));



    return 0;
}