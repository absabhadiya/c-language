#include <stdio.h>
int main()
{
    int i, sum=0, f, l;
    printf("Enter number = ");
    scanf("%d", &i);
    
    l = i % 10;
    
    while(i >= 10)
    {
        i = i / 10;
    }
    f = i;
  
    sum = f + l;
    printf("Sum = %d", sum);
    return 0;
}
