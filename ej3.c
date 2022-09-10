#include <stdio.h>

int main (void){

char v[100], *p, lw, enter, enter2;
int lc=0, wc=0, i=0, a=0, e=0 , y=0, o=0, u=0, j=0;

printf("ingrese texto:\n");
gets (v);
fflush (stdin);

//a)
lc=strlen (v);
printf ("la cant de letras es: %d\n", lc);

//b)
p=strtok(v," .");
while (p!=NULL){
        wc++;
        p=strtok(NULL, " ");
        }
printf ("la cant de palabras es: %d\n", wc);

//c)
while (i<lc){
        if (v[i]=='a'|| v[i]=='A'){
        a++;
    }else if(v[i]=='e'|| v[i]=='E'){
        e++;
        }else if(v[i]=='i'|| v[i]=='I'){
            y++;
            }else if(v[i]=='o'|| v[i]=='O'){
                o++;
                }else if(v[i]=='u'|| v[i]=='U'){
                    u++;
                    }
    i++;
}
if (a>e && a>y && a>o && a>u){
        printf ("A es la mas frecuente\n");
        }else if (e>a && e>y && e>o && e>u){
            printf ("E es la mas frecuente\n");
            }else if (y>e && y>a && y>o && y>u){
                printf ("I es la mas frecuente\n");
                }else if (o>e && o>y && o>a && o>u){
                    printf ("O es la mas frecuente\n");
                    }else if (u>e && u>y && u>o && u>a){
                        printf ("U es la mas frecuente\n");
                        }
//d)
printf ("Ingrese una letra a buscar en el texto:\n");
scanf ("%c", enter);
fflush (stdin);
i=0;
while (i<lw){
    if (enter == v[i]){
        j++;
    }
printf ("La letra %c, se encuentra: %d veces\n", enter, j);
}
/* si caracter1 se encuentra en cadena */
//   if ( strchr( cadena, caracter1 ) != NULL ) {
  //    printf( "\'%c\' se encuentra en \"%s\".\n",
    //     caracter1, cadena );
   } /* fin de if */
//e)
p=strtok(v," .");
lw = p;
while (p!=NULL){
        if (p>lw){
            lw = p;
        }
        p=strtok(NULL, " ");
        }
printf ("La palabra mas larga es: %c, con %d caracteres\n", lw, i);
//f)

}
