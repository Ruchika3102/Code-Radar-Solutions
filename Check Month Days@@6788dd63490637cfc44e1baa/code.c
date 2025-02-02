#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if(x>1&&x<=6&&x%2==0&&x!=2){
        printf("30");
    }
    else if(x>6&&x<=12&&x%2==0){
        printf("31");
    }
    else if(x>=1&&x<=7&&x%2!=0){
        printf("31");
    }
    else if(x>=9&&x<=11&&x%2!=0){
        printf("30");
    }
    else if(x==2){
        printf("28");
    }
    else{
        printf("Invalid month");
    }
    return 0;
}