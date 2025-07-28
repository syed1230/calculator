#include<stdio.h>
int main(){
int a=3,b=4,c=5;
float s,A;
s=(a+b+c)/2;
A=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle%f",A);
}
