#include <stdio.h>
#include<string.h>

int main (void){

char v[58]="habia una vez unos pajarillones regodeandose por su plumaje.";
int *p, i=0, a=0, e=0 , y=0, o=0, u=0;
float la=0.;

//a)
p=strtok(v," .");

while (p!=NULL){
        if (strlen(p)>10){
            i++;
        }
        p=strtok(NULL, " ");
        }
printf ("Hay %d palabras mayores a 10 letras\n", i);

//b)
while (i<58){
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
printf ("La cant de vocales A=%d, E=%d, I=%d, O=%d, U=%d,", a, e, y, o , u);
//c)
i=0;
y=0;
a=0;
while (i<58){
        printf("%x\n",v[i]);
    if (v[i]==0x0){
        y++;
        printf("%d",y);
    }
    i++;

}
printf ("%d", y);
la = ((float)y / 58.)*100.;
printf ("El porcentaje de espacios es:%.2f", la);
}
