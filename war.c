#include <stdio.h> 
#include <string.h> 


#define NUM_TERRITORIOS 5

/**
 * @brief 
 *
 * 
 * 
 * 
 * 
 */
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

// Função principal do programa
int main() {
    
    struct Territorio lista_territorios[NUM_TERRITORIOS];
    int i; 

    printf("==========================================\n");
    printf("     🛡️ CADASTRO DE TERRITÓRIOS MOBILE FIRST 🛡️\n");
    printf("==========================================\n");

    
    for (i = 0; i < NUM_TERRITORIOS; i++) {
        printf("\n--- Território %d de %d ---\n", i + 1, NUM_TERRITORIOS);

        
        printf("Digite o NOME do território (máx. 29 caracteres): ");
        
        if (scanf("%29s", lista_territorios[i].nome) != 1) {
             
            printf("Erro na leitura do nome. Encerrando.\n");
            return 1;
        }

        
        while (getchar() != '\n'); 
        
        
        printf("Digite a COR do exército (ex: Vermelho, Azul, Verde): ");
        
        if (scanf("%9s", lista_territorios[i].cor) != 1) {
            printf("Erro na leitura da cor. Encerrando.\n");
            return 1;
        }

        
        while (getchar() != '\n');

        
        printf("Digite a QUANTIDADE de tropas: ");
        if (scanf("%d", &lista_territorios[i].tropas) != 1) {
            printf("Erro na leitura da quantidade de tropas. Encerrando.\n");
            return 1;
        }
    }

    
    printf("\n\n==========================================\n");
    printf("📋 DADOS DOS TERRITÓRIOS CADASTRADOS 📋\n");
    printf("==========================================\n");

    
    printf("| %-29s | %-10s | %-6s |\n", "NOME", "COR", "TROPAS");
    printf("|-------------------------------|------------|--------|\n");

    
    for (i = 0; i < NUM_TERRITORIOS; i++) {
        
        printf("| %-29s | %-10s | %6d |\n",
               lista_territorios[i].nome,
               lista_territorios[i].cor,
               lista_territorios[i].tropas);
    }
    printf("|-------------------------------|------------|--------|\n");
    
    printf("\n✅ Cadastro e exibição concluídos com sucesso.\n");

    return 0; 