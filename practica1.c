#include <stdio.h>

int analizarPalindromo(int numero){
    int original, invertido=0, resto;
    original=numero;
    //los numeros negativos no son palindromos
    if(numero<0)
        return 0;
    //hay que invertir el numero para igualarlo
    while(numero>0){
        //Número_invertido = Número_invertido*10 + Número%10
        resto=numero%10;
        invertido=invertido*10+resto;
        numero/=10;
    }
    printf("Original = %d, Invertido = %d\n", original, invertido);
    return original==invertido;
}

int main(int argc, char *argv[]){
    int numero;    
    printf("Ingrese un numero para analizar: ");
    scanf("%d", &numero);    
    if(analizarPalindromo(numero)==1)
        printf("El numero es palindromo\n");
    else
        printf("El numero no es palindromo\n");
    return 0;
}