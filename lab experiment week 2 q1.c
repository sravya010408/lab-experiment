#include<stdio.h>
#include<stdlib.h>

int main()
{
float a,b,c;
float sum,average;

printf(" enter three numbers:");
scanf("%f%f%f",&a ,&b, &c);
 
 sum =a+b+c;
 average= sum/3;
 
 printf(" sum:%.2f\n",sum);
 printf("average:%.2f\n", average);
 
    return 0;
}