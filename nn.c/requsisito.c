#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strToLower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]); 
    }
}

int main(){
     
     int idade;
     char resposta[50], escolaridade[10], experiencia[10];

    printf("PREENCHIMENTO DE REQUISÍTOS\n");

     printf("Digite sua idade: ");
     scanf("%d" ,&idade);
     getchar();

    printf("tem conhecimento em pacote office básico? (sim/nao): ");
     scanf("%s" ,resposta); 
      strToLower(resposta); // Convertendo para minúsculas

     printf("Qual seu nível de escolaridade? ");
     scanf(" %[^\n]", escolaridade);
    strToLower(escolaridade);

     printf("Tem alguma experiência profissional? (Sim/Não): ");
     scanf("%s" , experiencia);
     strToLower(experiencia);

     if (idade >= 21 && strcmp(escolaridade, "médio") != NULL && strcmp(resposta, "sim") == 0 && strcmp(experiencia, "sim") == 0) {
    printf("Parabéns! Você preenche todos os requisitos.\n");
} else {
    printf("Infelizmente, você não atende a todos os requisitos.\n");
}
    return 0;
     }

    
      
     
     

     

