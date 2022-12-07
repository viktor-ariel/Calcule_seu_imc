#include<stdio.h>
#include<math.h>
#include<conio.h>


int main(){
    float peso, alt, imc;
    system("cls");


    printf("Qual o seu peso? ");
    scanf("%f", &peso);
    system("cls");

    printf("Qual sua altura? ");
    scanf("%f", &alt);
    system("cls");

    imc = peso / pow(alt,2);

    printf("\n O seu peso e: %.2f \n", peso);
    printf("\n Sua altura e: %.2f \n", alt);
    printf("\n Seu IMC e: %.2f\n", imc);


    if (imc<18.5){

        printf("\n Voce esta abaixo do peso \n\n");
    }
    else if (imc<25){

        printf("\n Seu peso esta normal \n\n");
    }
      else if (imc<30){

        printf("\n Voce esta com excesso de peso \n\n");
    }
      else if (imc<35){

        printf("\n Voce esta com Obesidade classe I \n\n");
    }
     else if (imc<40){

        printf("\n Voce esta com Obesidade classe II \n\n");
    }
     else{

        printf("\n Voce esta com Obesidade classe III \n\n");
    }


    system("pause");
}
