#include <stdio.h>
int main() {
   int x,y;
   scanf("%d%dd",&x,&y);
   int z=x>>y;
   printf("%d",z);
    return 0;
}