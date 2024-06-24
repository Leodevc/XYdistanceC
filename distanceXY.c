#include<stdio.h>
#include<math.h>

//Programa para calcular a distância entre dois pontos, X e Y.

struct ponto{   //Struct para estruturar os dados de dois pontos, X e Y.
    float x;
    float y;
};

int main(){
    struct ponto coordenadas[2];   //Struct dos pontos com a variável "coordenadas" atribuída com 2 espaços na memória.   

    for(int i = 0; i < 2; i++){   //Looping com a variável "i" como contadora para haver a entrada de dados das coordenadas X e Y.
        printf("Coordenada %d - x:\n", i + 1);
        scanf("%f", &coordenadas[i].x);              
        printf("Coordenada %d - y:\n", i + 1);       
        scanf("%f", &coordenadas[i].y);         //Comandos de entrada das coordenadas.
    }

    float distancia;    //Variável do tipo Float para fazer o cálculo da distância entre os pontos X e Y
   
    distancia = sqrt(pow(coordenadas[1].x - coordenadas[0].x, 2) + pow(coordenadas[1].y - coordenadas[0].y, 2)); //Cálculo da distância
    printf("A distância entre os pontos é: %f\n", distancia);    //Impressão da distância entre X e Y.
    return 0;
}

