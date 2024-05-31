// logic to print ASCII chart

#include<stdio.h>
int main()
{
int x;
x=0;
while(x<=255)
{
printf("%c %d",x,x);
x++;
}
return 0;
}