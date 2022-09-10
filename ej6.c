#include <stdio.h>

//void inversa( const char * const ptrS );
void inversa (char *enuptr);

int main(void){

char enunciado[ 80 ];


printf( "Introduzca una linea de texto:\n" );
gets(enunciado);
fflush (stdin);



printf( "\nLa linea impresa al reves es:\n" );
inversa( enunciado );
printf ("%s", enunciado);

return 0;
}

//void inversa( const char * const ptrS ){
//if ( ptrS[ 0 ] == '\0' ) { /* caso base */
//    return;
//   }else {
//      inversa( &ptrS[ 1 ] ); /* paso recursivo */
 //     putchar( ptrS[ 0 ] ); /* utiliza putchar para desplegar los caracteres */
//   }
//}

void inversa (char enuptr[]){

int i,j=strlen(enuptr)-1;
char aux;

for (i=0; i<j;i++){
     aux = (enuptr[i]);
    (enuptr[i]) = (enuptr[j]);
    (enuptr[j])= aux;
    j--;

}


}
