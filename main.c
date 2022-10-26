#include <stdio.h>

//Prototipos
int exponente_negativo(int exponete);
float potencia(int base, int exponente);
int pideBase();
int pideExp();
void imprimeResultado(float potencia, int base, int exp);

int main() {
    float resul;
    int base, exponente;
    base=pideBase();
    exponente=pideExp();
    resul=potencia(base,exponente);
    imprimeResultado(resul,base,exponente);
    return 0;
}

int exponente_negativo(int exponete){
    int esNegativo=0;
    if (exponete<0)
        esNegativo=1;
    return esNegativo;
}

int pideBase(){
    int base;
    printf("Introduce el valor de la base: ");
    scanf("%d",&base);
    return base;
}

int pideExp(){
    int exp;
    printf("Introduce el valor del exponente: ");
    scanf("%d",&exp);
    return exp;
}

float potencia(int base, int exponente){
    int exp=exponente;
    int negativo= exponente_negativo(exp);
    float acumulador=1;
    if (negativo==1)
        exp=-exp;
    for (int i = 0; i < exp; ++i) {
        acumulador*=(float)base;
    }
    if (negativo==1)
        acumulador=(1/acumulador);
    return acumulador;
}

void imprimeResultado(float potencia, int base, int exp){
    printf("\nLa potencia de %d elevado a %d es: %.3f",base,exp,potencia);
}