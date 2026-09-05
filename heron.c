#include<stdio.h>
#include<math.h>
int main()
{
    int a=3,b=3,c=4,s;
    s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of triangle=%f",area);
}
