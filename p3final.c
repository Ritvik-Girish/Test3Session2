#include<stdio.h>
void input(int *n,int *r)
{
  printf("enter the N\n");
  scanf("%d",n);
  printf("enter the R\n");
  scanf("%d",r);
  return 0;
}

void factorial(int n ,int r,int *ncr)
{ 
  int nf,rf,nmrf;
  nf=1;
  for(int i=1;i<n;i++)
    nf=nf*i;
  rf=1;
  for(int i=1;i<r;i++)
    rf=rf*i;
  nmrf=1;
  for(int i=1;i<(n-r);i++)
    nmrf=nmrf*i;
  ncr=(nf/(nmrf*rf));
}

void output(int n,int r,int c)
{
  printf(" %dC%d = %d ",n,r,c);
}

int main(){
  int n,r,nCr;
  input(n,r);
  factorial(n,r,nCr);
  output(n,r,nCr);
  return 0;
  }
  