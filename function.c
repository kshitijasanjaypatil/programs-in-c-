#include <stdio.h>
void addition(int a,int b)
{ 
    int add;
    add=a+b;
    printf("\nAddition of two numbers=%d",add);
}
void subtraction(int p,int q)
{  
    int sub;
    sub=p-q;
    printf("\nSubtraction of two numbers=%d",sub);
}
void multiplication(int m,int n)
{ 
    int mul;
    mul=m*n;
    printf("\nMultiplication of two numbers=%d",mul);
}
void division(int x,int y)
{ 
    float div;
    div=x/y;
    printf("\nDivision of two numbers=%f",div);
} 
void main()
{ 
    int b,d;
    printf("\nEnter any two numbers");
    scanf("%d%d",&b,&d);
    addition(b,d);
    subtraction(b,d);
    multiplication(b,d);
    division(b,d);
}
