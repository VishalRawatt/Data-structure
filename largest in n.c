#include <stdio.h>
void main()
{
int a[100], i, max, size;
printf("Enter the size:\n");
scanf("%d", &size);
printf("Enter the number\n");
for (i = 0; i < size; i++)
{
scanf("%d", &a[i]);
}
max = a[0];
for (i = 1; i < size; i++)
{
if (max < a[i])
max = a[i];
}
printf("Maximum number is : %d\n", max);
printf("This is prepared by Vishal Rawat , Roll no 2100321530190");
}
