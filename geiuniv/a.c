#include <stdio.h>
int main(void)
{
    int t[] = {9, 21, 16, 32, 7, 17, 22, 5, 35};
    int *p;
    p = t;
    /* ligne manquante */
    printf("%i", &p + 1);
    return 0;
}