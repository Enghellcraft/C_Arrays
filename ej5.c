#include <stdio.h>
#include<string.h>

int strlent(char *v);

int main (void){

char v[]="habia una vez unos pajarallanios regodeandose por su plumaje.";
int  max, i, k;
char *p, *dmax, *dp;
printf("%x\n",(v+19));
//a)
p=strtok(v," .");
max = strlen (p);

while (p!=NULL){
        if (strlen(p)>max){
            max = strlen (p);
            dmax= p;
        }
        p=strtok(NULL, " ");
        }
i=0;
while (i<strlen(v)){
    if (&v[i] == dmax){
        k = i;
    }
    i++;
}
printf ("La letra de la palabra mas larga se encuentra en: %x, en la posicion %d\n", dmax, k+1);

//b)
printf ("la long del text es: %d", strlent (v));

//c)
k=0;
i=0;
p=strtok(v," .");
while (p!=NULL){
        if (strlen(p)>8 && strlen(p)<16){
                for (k=0; p==strlen(p);p++){
                    if (*p == 'a' || *p == 'A'){
                        k++;
                    }
                if (k > 3){
                    printf ("La palabra %c es mayor a 8 menor a 16 y con mas de 3 a", *p);
                            }
                    }
        }
        p=strtok(NULL, " ");
        }
}

int strlent(char *v)
{
  int n;
  for (n = 0; *v != '.'; v++)
    n++;
  return n;
}
