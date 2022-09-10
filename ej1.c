#include<stdio.h>


int main (void){

int i;
char cadena[10], car;

printf ("Ingrese una cadena de 10 caracteres max:\n");
gets (cadena);
fflush (stdin);

printf ("ingrese el caracter que desea buscar en la cadena: \n");
scanf ("%c", &car);
fflush (stdin);

while (i<10){
    if (car == cadena[i]){
       printf ("El caracter '%c', se encuentra en la posicion %d de la cadena", car, i+1);
       i = 10;
    }else{
        i++;
    }

}

}
