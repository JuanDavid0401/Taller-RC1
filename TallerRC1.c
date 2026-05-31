#include <stdio.h>

int main() {
    int n;

    
    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &n);

    
    if(n <= 0) {
        printf("Error: Debe haber al menos 1 estudiante.\n");
        return 1;
    }

    float notas[n][3];

    
    printf("\n INGRESO DE NOTAS \n");
    for(int i = 0; i < n; i++) {
        printf("\n Estudiante %d \n", i + 1);
        for(int j = 0; j < 3; j++) {
            do {
                printf("Calificacion para Asignatura %d (0 a 10): ", j + 1);
                scanf("%f", &notas[i][j]);
                
                if(notas[i][j] < 0 || notas[i][j] > 10) {
                    printf("-> Nota invalida. Intente de nuevo.\n");
                }
            } while(notas[i][j] < 0 || notas[i][j] > 10);
        }
    }

    printf(" \n RESULTADOS POR ESTUDIANTE \n");
    
    for(int i = 0; i < n; i++) {
        float suma_est = 0;
        
        float max_est = notas[i][0]; 
        float min_est = notas[i][0];

        
        for(int j = 0; j < 3; j++) {
            suma_est += notas[i][j];
            if(notas[i][j] > max_est) max_est = notas[i][j];
            if(notas[i][j] < min_est) min_est = notas[i][j];
        }
        
        printf("Estudiante %d -> Promedio: %.2f | Max: %.2f | Min: %.2f\n", 
               i + 1, suma_est / 3.0, max_est, min_est);
    }