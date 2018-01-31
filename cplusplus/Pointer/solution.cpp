#include <stdio.h>
#include <iostream>

void update(int *a,int *b) 
{
    int tempSum;
    int tempAbsDiff;
    tempSum = *a + *b;
    tempAbsDiff = abs(*a-*b);
    *a = tempSum;
    *b = tempAbsDiff;
}

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
