#include<stdio.h>


int main (void){

int i;
char v[100],*p;

printf ("ingrese el texto: \n");
gets (v);
fflush (stdin);

p=strtok(v," ");

while (p!=NULL){
        printf ("%s %d\n", p,strlen(p));
        p=strtok(NULL, " ");
}

	}
