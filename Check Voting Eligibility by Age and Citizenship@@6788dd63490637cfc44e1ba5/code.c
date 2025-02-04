#include <stdio.h>
#include<stdbool.h>
int main() {
int x;
bool y;
scanf("%d",x);
scanf("%d",y);
if(x>=18&&y==1){
    printf("Eligible");
}
else{
    printf("Not Eligible");
}
    return 0;
}