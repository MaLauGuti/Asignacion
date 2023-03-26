/* 1. Escriba un programa en c, que pida una cantidad n de números enteros; cada uno de ellos deberá ser
introducido mientras que no sea distinto de 0.

Calcular:

1. Cuántos números son pares e impares?
2. Cuántos ceros se han introducido por teclado?
3. Cuántos son primos?
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
int n= 0, i, num2=0, cont_par=0, cont_impar=0, j=0, cp=0, cnp=0, cc=0;
bool band;

printf("Ingrese cantidad de numeros a evaluar\n");

do {
    scanf("%d", &n);
}while (n<0);

for (i=1; i<=n; i++){

    printf("Ingrese el numero #%d\n", i);
    scanf("%d", &num2);
        if(num2 % 2 == 0) 
        { 
        cont_par= cont_par + 1;
    }
        else {
        cont_impar= cont_impar+1;
                    }    
    if (num2>2) {
         j = 2;
         do {
             band = num2 % j == 0;
             j = j+1;
     } while (j< num2 && !band);
    
    if (band == false) {
        cp = cp + 1;
    }
    else {
        cnp = cnp + 1;}
}
    while (num2/10 > 0){
        if (num2%10==0){
        cc = cc + 1;
    }
    num2 = num2/10;
}
}
printf("La cantidad de numeros primos es: %d\n", cp);
printf("La cantidad de numeros que no son primos es: %d\n", cnp);
printf("la cantidad de numeros impares es:%d\n", cont_impar);
printf("la cantidad de numeros pares es:%d\n", cont_par);
printf("La cantidad de ceros ingresados es %d", cc);
return 0;
}  
  