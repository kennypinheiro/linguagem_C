#include <stdio.h>

void is_in(const char *s, char c){

    while(*s){
        if(*s == c){
            printf("%c ", '-');
        }
        else{
            printf("%c ", *s);
        }
        s++;
    }
    printf("\n");
}

int main(void){
    char *p = "Kenny";

    is_in(p, 'n');
    return 0;
}