#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x==y&&x==z){
        printf("Equilateral");
    }
    else if((x==y&&x!=z)||(x==z&&x!=y)||(z==x&&z!=y)||(z==y&&z!=x)||(y==x&&y!=z)||(y==z&&y!=x)){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}