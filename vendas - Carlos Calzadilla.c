#include <stdio.h>

int main() {
    char respuesta;
    
    do {
        // Variables para los productos
        float precio1, precio2, precio3;
        int cantidad1, cantidad2, cantidad3;
        float total;
        float promedio;
        int total_productos;
        
        // Pedir datos del producto 1
        printf("Producto 1 - Cantidad: ");
        scanf("%d", &cantidad1);
        printf("Producto 1 - Precio: ");
        scanf("%f", &precio1);
        
        // Pedir datos del producto 2
        printf("Producto 2 - Cantidad: ");
        scanf("%d", &cantidad2);
        printf("Producto 2 - Precio: ");
        scanf("%f", &precio2);
        
        // Pedir datos del producto 3
        printf("Producto 3 - Cantidad: ");
        scanf("%d", &cantidad3);
        printf("Producto 3 - Precio: ");
        scanf("%f", &precio3);
        
        // Calcular total
        total = (cantidad1 * precio1) + (cantidad2 * precio2) + (cantidad3 * precio3);
        total_productos = cantidad1 + cantidad2 + cantidad3;
        promedio = total / total_productos;
        
        // Mostrar resultados
        printf("\nTOTAL: R$ %.2f\n", total);
        printf("PROMEDIO: R$ %.2f\n", promedio);
        
        // Convertir a billetes
        int reales = (int)total;
        int centavos = (int)((total - reales) * 100);
        
        printf("\n%d reales y %d centavos\n", reales, centavos);
        printf("Billetes:\n");
        
        // Billete de 100
        int b100 = reales / 100;
        if (b100 > 0) {
            printf("%d de R$ 100\n", b100);
            reales = reales % 100;
        }
        
        // Billete de 50
        int b50 = reales / 50;
        if (b50 > 0) {
            printf("%d de R$ 50\n", b50);
            reales = reales % 50;
        }
        
        // Billete de 20
        int b20 = reales / 20;
        if (b20 > 0) {
            printf("%d de R$ 20\n", b20);
            reales = reales % 20;
        }
        
        // Billete de 10
        int b10 = reales / 10;
        if (b10 > 0) {
            printf("%d de R$ 10\n", b10);
            reales = reales % 10;
        }
        
        // Billete de 5
        int b5 = reales / 5;
        if (b5 > 0) {
            printf("%d de R$ 5\n", b5);
            reales = reales % 5;
        }
        
        // Billete de 2
        int b2 = reales / 2;
        if (b2 > 0) {
            printf("%d de R$ 2\n", b2);
            reales = reales % 2;
        }
        
        // Moneda de 1
        if (reales > 0) {
            printf("%d de R$ 1\n", reales);
        }
        
        // Preguntar si repite
        printf("\n¿Otra compra? (S/N)**Por Favor digitar en Mayusculas**)): ");
        scanf(" %c", &respuesta);
        
    } while (respuesta == 'S'); // Repetir programa
    
    return 0;
}