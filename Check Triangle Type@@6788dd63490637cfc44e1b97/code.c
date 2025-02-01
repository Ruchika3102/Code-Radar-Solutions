#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x==y&&x==z){
        printf("Equilateral");
    }
    else if((x!=y&&x!=z)||(y!=x&&y!=z)||(z!=x&&z!=y)){
        printf("Scalene");
    }
    else{
        printf("Equilateral");
    }
    return 0;
}