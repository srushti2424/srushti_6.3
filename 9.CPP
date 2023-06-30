#include<stdio.h>
#include<conio.h>

void main(){
int i=1,sum=1;
int n;
clrscr();
printf("enter any number:  ");
scanf("%d",&n);
for(i=1;i<=n;++i){
  sum*=i;
 }
 printf("sum=%d",sum);
getch();
}