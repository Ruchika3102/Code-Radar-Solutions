#include <stdio.h>
int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    if(y-x>0){
        printf("Profit");
    }
    else if(y-x<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}