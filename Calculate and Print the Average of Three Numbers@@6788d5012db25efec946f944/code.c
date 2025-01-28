#include <stdio.h>
int main() {
    int x,y,z;
    float average;
    scanf("%d%d%d%f",&x,&y,&z,&average);
    average=(x+y+z)/3;
    printf("Average: %.2f",average);
    return 0;
}