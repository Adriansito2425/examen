#include <stdio.h>

// Función para calcular el crédito anual
void calcularCreditoAnual(float montoTotal, float interesAnual, int cantidadAnios) {
    float montoPagado, interesPagado, montoPorMes,montototal2;

    printf("Año\tMonto anual\tInterés\tMonto mensual\n");
    for (int i = 1; i <= cantidadAnios; i++) {
        if (i==1)
        {
            interesPagado = ((montoTotal *interesAnual) / 100); // Calcula el interés mensual
        }else{
            interesPagado = ((montototal2 *interesAnual) / 100); // Calcula el interés mensual
        }
        
        montoPagado = (montoTotal/cantidadAnios) + interesPagado; // Calcula el monto total a pagar
        for (int j = 1; j <= 12; j++) {
            montoPorMes = montoPagado / 12; // Calcula el monto a pagar por mes
        }
        if (i==1)
        {
            montototal2 = montoTotal - (montoTotal/cantidadAnios); // Actualiza el monto total para el próximo mes
        }
        else
        {
            montototal2 = montototal2 - (montoTotal/cantidadAnios); // Actualiza el monto total para el próximo mes100
        }
        
        
        printf("%d\t%.2f\t\t%.2f\t%.2f\n", i, montoPagado, interesPagado,montoPorMes);
    }
}

int main() {
    float montoTotal, interesAnual;
    int cantidadAnios;
    
    // Solicitar datos de entrada al usuario
    printf("Ingrese el monto total del crédito: ");
    scanf("%f", &montoTotal);
    
    printf("Ingrese el interés anual (en porcentaje): ");
    scanf("%f", &interesAnual);
    
    printf("Ingrese la cantidad de años: ");
    scanf("%d", &cantidadAnios);
    
    // Llamar a la función para calcular el crédito anual
    calcularCreditoAnual(montoTotal, interesAnual, cantidadAnios);
    
    return 0;
}