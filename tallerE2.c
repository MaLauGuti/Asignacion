/*2. Desarrolle un programa en C que permita registrar las citas médicas de la clínica ABC, 
de n cantidad de pacientes, permitiendo mostrar por pantalla :

1. Cantidad de pacientes femeninos
2. Cantidad de pacientes masculinos
3. Cantidad de pacientes mayores de edad
4. Cantidad de pacientes menores de edad 

Y que además permita validar las fechas de nacimiento de cada paciente*/
#include <stdio.h>
#include <stdbool.h>

int main() {

    int n, i, edad, dia, mes, ano, cpf=0, cpm=0, cpmayor=0, cpmenor=0;
    char nombre[100];
    char genero;
    bool band;
    printf("Ingrese cantidad de pacientes a registrar\n");

do {
    scanf("%d", &n);
}while (n<0);

for (i=1; i<=n; i++){
    
    printf("Ingrese nombre del paciente #%d: \n", i);
    scanf(" %s", &nombre);
    printf("Ingrese genero del paciente #%d [f o m]: \n", i);
    scanf(" %c", &genero);
    printf("Ingrese edad de paciente #%d: \n", i);
    scanf("%d", &edad);
    printf("Ingrese fecha de nacimiento del paciente #%d: \n", i);
    
if (edad > 18){
    cpmayor = cpmayor +1;
}
else {
    cpmenor = cpmenor +1;
}

if (genero == 'f') {
    cpf = cpf + 1;
}
else{
    cpm = cpm + 1;
}
do {
    printf("Ingrese dia: \n");
    scanf("%d", &dia);
    if (dia > 32 || dia <1 ){
        printf("Dia incorrecto\n");
    }
    printf("Ingrese mes: \n");
    scanf("%d", &mes);
    if(mes < 1 || mes > 12){
        printf("Mes incorrecto\n");
    }
    printf("Ingrese año: \n");
    scanf("%d", &ano);
    }while (dia> 31 || mes > 12);
       
    
    switch ( mes )
    {
        case  1 :
        case  3 :
        case  5 :
        case  7 :
        case  8 :
        case 10 :
        case 12 : if ( dia >= 1 && dia <= 31 )
                       printf( "\n   FECHA CORRECTA\n" );
                  else
                          printf( "\n   FECHA INCORRECTA\n" );
                  break;

        case  4 :
        case  6 :
        case  9 :
        case 11 : if ( dia >= 1 && dia <= 30 )
                       printf( "\n   FECHA CORRECTA\n" );
                  else
                      printf( "\n   FECHA INCORRECTA\n" );
                  break;

        case  2 : if( ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0 )
                      if ( dia >= 1 && dia <= 29 )
                          printf( "\n   FECHA CORRECTA\n" );
                      else
                          printf( "\n   FECHA INCORRECTA\n" );
                  else
                      if ( dia >= 1 && dia <= 28 )
                          printf( "\n   FECHA CORRECTA\n" );
                      else
                          printf( "\n   FECHA INCORRECTA\n" );
    }
}


printf("Cantidad de pacientes mayores de edad: %d\n", cpmayor);
printf("Cantidad de pacientes menores de edad: %d\n", cpmenor);
printf("Cantidad de pacientes femeninos: %d\n", cpf);
printf("Cantidad de pacientes masculinos: %d\n", cpm);
    return 0;
}