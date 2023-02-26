#include <stdio.h>

int main(){
    int i=0;
    for(;i<7;i++) puts("@");
    for(;i<7+8;i++) putchar('@');
    putchar(10);
    return 0;
}
