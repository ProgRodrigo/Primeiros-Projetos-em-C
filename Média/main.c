
#include <stdio.h>
#include <stdlib.h>
 int  main(){
float X,Y,Z,MD;
        printf("\t\t Simulador!! \n\n\n");
    printf("\n Digite a NP1: ");
    scanf("%f", &X);
    printf("\n Digite a NP2: ");
    scanf("%f", &Y);
    printf("\n Digite a nota do PIM: ");
    scanf("%f", &Z);
    MD = (4 * X + 4 * Y + 2 * Z) / 10;
        if (MD >= 5) {
        printf("Voce esta Aprovado, Continue assim!!\n NP1:%.1f \t NP2:%.1f \t PIM:%.1f \t Media:%.1f \n",X,Y,Z, MD);
        }
         else{
                if (MD < 5)
        printf(" \n voce esta reprovado, Se esforce mais!! \n NP1:%.1f \t NP2:%.1f \t PIM:%.1f \t Media: %.1f \n ",X,Y,Z,MD);
         else
            printf(" \n Voce esta reprovado \t ");
         }
    system(" \n \n pause");
return 0;
}















