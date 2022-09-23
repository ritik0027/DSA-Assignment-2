#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 { int n,count=0 ;
 scanf("%d",&n);
 int A[n];
 for(int i=0;i<n;i++)
 {   scanf("%d",&A[i]);}
 for(int i=0;i<n;i++)
     { count+=A[i]; }
 printf("%d",count);
    return 0;
}
