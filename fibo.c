#include <stdio.h>
void  main()
{
int i, j, k= 1, l= 1, t;
printf("Enter the number of terms: ");
scanf("%d", &j);
printf("Fibonacci Series: ");
for (i = 1; i <= j; ++i)
{
printf("%d", k);
t= k+ l;
k= l;
l= t;
}
getch();
}
