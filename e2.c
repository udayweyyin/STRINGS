// logic to determine the length of string

#include<stdio.h>
int main()
{
int x;
char a[21];
printf("Enter a String : ");
scanf("%s",a);
x=0;
while(a[x]!='\0')
{
x++;
}
printf("lenth of %s is %d",a,x);
return 0;
}