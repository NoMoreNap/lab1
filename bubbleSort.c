#include <stdio.h>

void bubbleSort(int array[], int n) {
    int i = 0, j = 0, cache;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) { 
             if (array[j] > array[j + 1]) {
                cache = array[j];
                array[j] = array[j + 1];
                array[j + 1] = cache;
             }
        }
    }

}

int main()
{
    int mass[] = {11,29,33,4,5,62};
    int max =  mass[0];

    size_t n = sizeof(mass)/sizeof(mass[0]);

    bubbleSort(mass,n);
    for (int i = 0; i < n; i++) printf("%d\n", mass[i]);
     
}