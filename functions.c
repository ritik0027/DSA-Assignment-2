#include <stdio.h>

int max(int a, int b)
 {   
     if(a>b)
     {return a;}
     else
     {return b;}
      
      return 0 ;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int left_max= max(a, b);
    int right_max= max(c,d);
    int ans = max(left_max,right_max);
    printf("%d", ans);
     
    return 0;
}
