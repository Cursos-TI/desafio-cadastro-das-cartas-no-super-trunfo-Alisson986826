
#include <stdio.h>


int main() {

    printf(" Desafio cadastro de cartas\n");
    printf("Novo commit\n");

    //variaveis carta 1
    int carta1;
    char Estado1[30];
    char Código1[30];
    char Cidade1[30];
    int População1;
    float Área_em_km1;
    float Pib1;
    int Número_de_pontos_turísticos1;

    //variaveis carta 2
    int carta2;
    char Estado2[30];
    char Código2[30];
    char Cidade2[30];
    int População2;
    float Área_em_km2;
    float Pib2;
    int Número_de_pontos_turísticos2;

    // cadastro carta1
    printf("Digite o nome do estado 1: \n");
    scanf("%s", &Estado1);
    printf("Digite o código 1: \n");
    scanf("%s", &Código1);
    printf("Digite a cidade 1: \n");
    scanf("%s", &Cidade1);
    printf("Digite a população do estado 1: \n");
    scanf("%d", &População1);
    printf("Digite a área do estado 1 (em Km): \n");
    scanf("%f", &Área_em_km1);
    printf("Digite o Pib do estado 1: \n");
    scanf("%f", &Pib1);
    printf("Digite o número de pontos turísticos do estado 1: \n");
    scanf("%d", &Número_de_pontos_turísticos1);
    
    //cadastro carta2
    printf("Digite o nome do estado 2: \n");
    scanf("%s", &Estado2);
    printf("Digite o código 2: \n");
    scanf("%s", &Código2);
    printf("Digite a cidade 2: \n");
    scanf("%s", &Cidade2);
    printf("Digite a população do estado 2: \n");
    scanf("%d", &População2);
    printf("Digite a área do estado 2: \n");
    scanf("%f", &Área_em_km2);
    printf("Digite o Pib do estado 2: \n");
    scanf("%f", &Pib2);
    printf("Digite o número de pontos turísticos do estado 2: \n");
    scanf("%d", &Número_de_pontos_turísticos2);
    
    //exibindo as cartas
    printf("Todas as cartas \n");
    printf("Carta 1\n");
    printf("Estado:%s\n", Estado1);
    printf("Código:%s\n", Código1);
    printf("Cidade:%s\n", Cidade1);
    printf("População:%d\n", População1);
    printf("Área em Km:%f\n",Área_em_km1);
    printf("Pib:%f\n", Pib1);
    printf("Número de pontos turísticos:%d\n", Número_de_pontos_turísticos1);

    printf("Carta 2\n");
    printf("Estado:%s\n", Estado2);
    printf("Código:%s\n", Código2);
    printf("Cidade:%s\n", Cidade2);
    printf("População:%d\n", População2);
    printf("Área em Km:%f\n", Área_em_km2);
    printf("Pib:%f\n", Pib2);
    printf("Número de pontos turísticos:%d\n", Número_de_pontos_turísticos2);

    return 0;





    
    


    
}
