#include <stdio.h>
int main() {
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>=18&&y==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}