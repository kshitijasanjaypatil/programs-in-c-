#include<stdio.h>

int main()
{
  int length_of_rectangle,breadth_of_rectangle,area_of_rectangle;
   
   printf("\n enter the length of rectangle:");
   scanf("%d",&length_of_rectangle);
   
   printf("\n enter the breadth of rectangle:");
   scanf("%d",&breadth_of_rectangle);
   
   area_of_rectangle=length_of_rectangle*breadth_of_rectangle;
    printf("\n area of rectangle:%d",area_of_rectangle);

   return (0);
}
     
