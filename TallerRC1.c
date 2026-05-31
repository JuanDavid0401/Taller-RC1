#include <stdio.h>

int main() {
    int n;

    
    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &n);

    
    if(n <= 0) {
        printf("Error: Debe haber al menos 1 estudiante.\n");
        return 1;
    }