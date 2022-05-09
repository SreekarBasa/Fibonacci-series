#include <stdio.h>
#include <math.h>
int main()
{
  int i,s,s1,s2,a ;
  printf("No.of terms of series required : ");
  scanf("%d",&a);
  s = 1 ;
  printf("1");

    for(i=0,s1=0,s2=0;i<a;i++)
     { 
       if (i!=0)
       {
        s = s1 + s2 ;
        printf(",%d",s);   
       }
       s2 = s1;
       s1 = s ;
     }
  return 0;
}