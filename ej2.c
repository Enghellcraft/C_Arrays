#include<stdio.h>


int main (void){

int i;
char v[100],*p, v2[100]={NULL}, aux;

printf ("ingrese el nombre: \n");
gets (v);
fflush (stdin);

p=strtok(v," ");

while (p!=NULL){
        if ((*p<=0x5A)&&(*p>=0x41)){
        //printf ("%c",*p);
        strncat (v2, p,1);
        }
        p=strtok(NULL, " ");
}
printf ("%s", v2);
	}






