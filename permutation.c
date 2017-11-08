#include<stdio.h>
int main()
{
    int i=1;

    for(i=123;i<=333;i++)
    {
    int a=i/100;
    int b=i/10%10;
    int c=i%10;
    int d=(2*i)/100;
    int e=(2*i)/10%10;
    int f=(2*i)%10;
    int g=(3*i)/100;
    int h=(3*i)/10%10;
    int j=(3*i)%10;
        if(  a+b+c+d+e+f+g+h+j==45 
		 && a*b*c*d*e*f*g*h*j==362880 
		 )
            printf("%d %d %d\n",i,2*i,3*i);
    }

}
