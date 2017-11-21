#include<stdio.h>
main()
{
int i,size,pos=0,neg=0;
float avg;

    printf("enter the size of array\n");
    scanf("%d",&size);

       int array [size];

    printf("enter numbers to find sum of positive and negative numbers\n");

     for(i=0;i<size;i++)


{
   scanf("%d",&array[i]);
}

    for(i=0;i<size;i++)
{
  if(array[i]>0)
  pos+=array[i];
  if(array[i]<0)
  neg+=array[i];
}
 
     printf("the sum of negative integers is %d\n",neg);
}
