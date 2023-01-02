#include <stdio.h>
int a[5]={5, 6, 3, 2, 4};
int main()
{
  for(int h = 0 ; h < sizeof(a[5]) ; h++)
   {
    for(int i = 0 ; i < 4 - h ; i++)
    {
        int temp;
        if(a[i] > a[i+1] && i < 4)
        {
          temp = a [i];
          a[i]= a[i+1];
          a[i+1]=temp;
        }
        printf("processing[%d] : %d %d %d %d %d\n", h, a[0], a[1], a[2], a[3], a[4]);
    }
   }
    printf("completed : %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
    return 0;
  }
