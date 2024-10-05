#include <stdio.h>


int multiply(a, b) {
    return a * b;  
}

int main() {
    int result= multiply(5, 3);  
    printf("%d\n", result);  
    return 0;
}