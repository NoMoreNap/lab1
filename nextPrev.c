#include <stdio.h>
#include <stdbool.h>
int main()
{
  int mass[] = {10, -5, -3, 5, 3};
  int count = 0;
  size_t n = sizeof(mass) / sizeof(mass[0]);
  for (int i = 0; i < n ; i++) {
    if (i != n - 1) {
        bool is_positive_current = mass[i] >= 0;
        bool is_negative_current = mass[i] < 0;

        bool is_positive_next = mass[i+1] >= 0;
        bool is_negative_next = mass[i+1] < 0;

        if ((is_positive_current && is_negative_next) || (is_negative_current && is_positive_next) ) {
            count++;
        }
        
    }

  }
  printf("%d\n", count);
}