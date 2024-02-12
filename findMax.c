#include <stdio.h>
#include <stdbool.h>
int main()
{
    int mass[] = {1,2,3,4,5,6};
    int max =  mass[0];

    size_t n = sizeof(mass)/sizeof(mass[0]);

    for(int i = 0; i < n; i++) {
        if (mass[i] > max) max = mass[i];
    }

    printf("%d\n", max);
}