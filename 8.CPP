#include<stdio.h>
#include<conio.h>

void main(){
int i;
int n;
int ans = 0;
clrscr();
printf("enter any number: ");
scanf("%d",&n);
for(i=1;i<=10;++i){
  ans = n *i;
  printf("%d * %d = %d\n",n,i,ans);
  }
getch();
}