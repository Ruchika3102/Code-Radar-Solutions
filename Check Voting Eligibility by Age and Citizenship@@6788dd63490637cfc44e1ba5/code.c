#include <stdio.h>
#include<stdbool.h>
int main() {
    int x;
    bool y;
    scanf("%d",&x);
    scanf("%d",&y);
    if((x<=18&&y==1)||(x<=18&&y==0)||(x>=18&&y==0)){
        printf("Not Eligible");
    }

    else{
        printf("Eligible");
    }
    return 0;
}