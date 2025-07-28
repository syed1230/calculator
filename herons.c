#include<stdio.h>
int main(){
int a,b,c;
float s,A;
printf("enter a,b values");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
A=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle%f",A);
}
