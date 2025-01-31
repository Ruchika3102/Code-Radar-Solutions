#include <stdio.h>
int main() {
    char x;
    scanf("%c",&x);
    if(islower(x)){
        printf("Lowercase");
    }
    else if(isupper(x)){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}