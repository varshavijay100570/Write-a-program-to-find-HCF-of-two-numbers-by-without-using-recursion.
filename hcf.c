#include<stdio.h>
void main()
{
  int a,b,c,l=0;
  scanf("%d%d",&a,&b);
  if(a>=b)
   c=a;
  else
   c=b;
  for(int i=2;i<=c;i++)
  {  if(a%i==0&&b%i==0)
      {  if(i>l)
           l=i;
       }
  }
  printf("%d",l);
}