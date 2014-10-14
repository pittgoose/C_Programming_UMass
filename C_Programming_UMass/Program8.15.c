// Program to illustrate automatic and static variables

#include <stdio.h>

void autoStatic(void){
    int auto_var = 1;
    static int static_var = 1;
    
    printf("automatic = %i, static = %i\n", auto_var, static_var);
    
    ++auto_var;
    ++static_var;
}

int main (void){
    int i;
    void autoStatic(void);
    
    for (i = 0; i < 5; ++i) {
        autoStatic();
    }
    
    return 0;
}