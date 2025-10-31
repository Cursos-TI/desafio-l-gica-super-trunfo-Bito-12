#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


#include <stdio.h>   // Biblioteca para entrada e saída
#include <string.h>  // Biblioteca para strings

int main() {
    
    /*
     * ====================================================================
     * SEÇÃO 1: DECLARAÇÃO DAS VARIÁVEIS
     * ====================================================================
     */
    
    // === VARIÁVEIS PARA A PRIMEIRA CARTA ===
    char estado1[10];
    char codigo1[10];
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    
    // === VARIÁVEIS PARA A SEGUNDA CARTA ===
    char estado2[10];
    char codigo2[10];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    
    // === VARIÁVEIS DE CONTROLE DO JOGO ===
    int primeira_escolha = 0;          // Armazena o primeiro atributo escolhido
    int segunda_escolha = 0;           // Armazena o segundo atributo escolhido
    int continuar_jogando = 1;         // Controla se o jogo continua
    
    // === VARIÁVEIS PARA COMPARAÇÃO ===
    float valor1_atributo1 = 0;        // Valor do 1º atributo da Carta 1
    float valor2_atributo1 = 0;        // Valor do 1º atributo da Carta 2
    float valor1_atributo2 = 0;        // Valor do 2º atributo da Carta 1
    float valor2_atributo2 = 0;        // Valor do 2º atributo da Carta 2
    float soma_carta1 = 0;             // Soma dos atributos da Carta 1
    float soma_carta2 = 0;             // Soma dos atributos da Carta 2
    int vencedor_atributo1 = 0;        // Vencedor do 1º atributo (1=Carta1, 2=Carta2, 0=Empate)
    int vencedor_atributo2 = 0;        // Vencedor do 2º atributo
    int vencedor_final = 0;            // Vencedor final
    
    // Nomes dos atributos para exibição
    char nome_atributo1[50];
    char nome_atributo2[50];

    /*
     * ====================================================================
     * SEÇÃO 2: APRESENTAÇÃO DO PROGRAMA
     * ====================================================================
     */
    
    printf("╔════════════════════════════════════════════════════╗\n");
    printf("║      SUPER TRUNFO - DESAFIO NÍVEL MESTRE          ║\n");
    printf("║   Comparação Avançada com Múltiplos Atributos!    ║\n");
    printf("╚════════════════════════════════════════════════════╝\n");
    printf("\n🎯 MODO AVANÇADO: Escolha 2 atributos para batalha!\n");
    printf("⚡ Sistema de soma e comparação múltipla!\n");
    printf("🏆 Descubra o grande vencedor!\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n\n");

    /*
     * ====================================================================
     * SEÇÃO 3: CADASTRO DA PRIMEIRA CARTA
     * ====================================================================
     */
    
    printf("╔════════════════════════════════════════════════════╗\n");
    printf("║         CADASTRO DA PRIMEIRA CARTA                 ║\n");
    printf("╚════════════════════════════════════════════════════╝\n\n");
    
    printf("📍 Estado (ex: SP, RJ): ");
    scanf("%s", estado1);
    printf("🔖 Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("🏙️  Cidade/País: ");
    scanf(" %[^\n]", cidade1);
    printf("👥 População: ");
    scanf("%d", &populacao1);
    printf("📏 Área (km²): ");
    scanf("%f", &area1);
    printf("💰 PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("🗼 Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    /*
     * ====================================================================
     * SEÇÃO 4: CADASTRO DA SEGUNDA CARTA
     * ====================================================================
     */
    
    printf("\n╔════════════════════════════════════════════════════╗\n");
    printf("║         CADASTRO DA SEGUNDA CARTA                  ║\n");
    printf("╚════════════════════════════════════════════════════╝\n\n");
    
    printf("📍 Estado (ex: SP, RJ): ");
    scanf("%s", estado2);
    printf("🔖 Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("🏙️  Cidade/País: ");
    scanf(" %[^\n]", cidade2);
    printf("👥 População: ");
    scanf("%d", &populacao2);
    printf("📏 Área (km²): ");
    scanf("%f", &area2);
    printf("💰 PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("🗼 Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    /*
     * ====================================================================
     * SEÇÃO 5: CÁLCULOS AUTOMÁTICOS
     * ====================================================================
     */
    
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1;
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2;

    /*
     * ====================================================================
     * SEÇÃO 6: EXIBIÇÃO DAS CARTAS
     * ====================================================================
     */
    
    printf("\n\n╔════════════════════════════════════════════════════╗\n");
    printf("║           CARTAS PRONTAS PARA BATALHA!            ║\n");
    printf("╚════════════════════════════════════════════════════╝\n");
    
    printf("\n🏆 CARTA 1: %s (%s)\n", cidade1, estado1);
    printf("   População: %d | Área: %.2f km²\n", populacao1, area1);
    printf("   PIB: R$ %.2f bi | Pontos: %d\n", pib1, pontos_turisticos1);
    printf("   Densidade: %.2f hab/km² | PIB per capita: R$ %.2f\n", 
           densidade_populacional1, pib_per_capita1);
    
    printf("\n🏆 CARTA 2: %s (%s)\n", cidade2, estado2);
    printf("   População: %d | Área: %.2f km²\n", populacao2, area2);
    printf("   PIB: R$ %.2f bi | Pontos: %d\n", pib2, pontos_turisticos2);
    printf("   Densidade: %.2f hab/km² | PIB per capita: R$ %.2f\n", 
           densidade_populacional2, pib_per_capita2);

    /*
     * ====================================================================
     * SEÇÃO 7: LOOP PRINCIPAL DO JOGO
     * ====================================================================
     */
    
    while (continuar_jogando) {
        
        // Resetar escolhas
        primeira_escolha = 0;
        segunda_escolha = 0;
        
        /*
         * ════════════════════════════════════════════════════════════
         * MENU 1: ESCOLHA DO PRIMEIRO ATRIBUTO
         * ════════════════════════════════════════════════════════════
         */
        
        printf("\n\n╔════════════════════════════════════════════════════╗\n");
        printf("║        ESCOLHA O PRIMEIRO ATRIBUTO                 ║\n");
        printf("╚════════════════════════════════════════════════════╝\n");
        printf("\n📊 Atributos disponíveis:\n\n");
        printf("   1️⃣  - População\n");
        printf("   2️⃣  - Área\n");
        printf("   3️⃣  - PIB\n");
        printf("   4️⃣  - Pontos Turísticos\n");
        printf("   5️⃣  - Densidade Populacional (menor vence!)\n");
        printf("   6️⃣  - PIB per Capita\n");
        printf("   0️⃣  - Sair do jogo\n");
        printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("Digite sua escolha: ");
        scanf("%d", &primeira_escolha);
        
        // Validar primeira escolha
        if (primeira_escolha == 0) {
            printf("\n👋 Obrigado por jogar!\n");
            continuar_jogando = 0;
            continue;
        }
        
        if (primeira_escolha < 1 || primeira_escolha > 6) {
            printf("\n❌ OPÇÃO INVÁLIDA! Escolha entre 1 e 6.\n");
            continue;
        }
        
        /*
         * ════════════════════════════════════════════════════════════
         * MENU 2: ESCOLHA DO SEGUNDO ATRIBUTO (DINÂMICO!)
         * ⭐ Este menu exclui a opção já escolhida no primeiro menu
         * ════════════════════════════════════════════════════════════
         */
        
        printf("\n╔════════════════════════════════════════════════════╗\n");
        printf("║       ESCOLHA O SEGUNDO ATRIBUTO                   ║\n");
        printf("╚════════════════════════════════════════════════════╝\n");
        printf("\n📊 Atributos disponíveis (exceto o já escolhido):\n\n");
        
        // ⭐ MENU DINÂMICO: mostra apenas opções não escolhidas
        if (primeira_escolha != 1) printf("   1️⃣  - População\n");
        if (primeira_escolha != 2) printf("   2️⃣  - Área\n");
        if (primeira_escolha != 3) printf("   3️⃣  - PIB\n");
        if (primeira_escolha != 4) printf("   4️⃣  - Pontos Turísticos\n");
        if (primeira_escolha != 5) printf("   5️⃣  - Densidade Populacional\n");
        if (primeira_escolha != 6) printf("   6️⃣  - PIB per Capita\n");
        
        printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("Digite sua escolha: ");
        scanf("%d", &segunda_escolha);
        
        // ⭐ VALIDAÇÃO: não pode escolher o mesmo atributo
        if (segunda_escolha == primeira_escolha) {
            printf("\n❌ ERRO! Você já escolheu este atributo.\n");
            printf("💡 Escolha um atributo diferente.\n");
            continue;
        }
        
        if (segunda_escolha < 1 || segunda_escolha > 6) {
            printf("\n❌ OPÇÃO INVÁLIDA! Escolha entre 1 e 6.\n");
            continue;
        }
        
        /*
         * ════════════════════════════════════════════════════════════
         * PROCESSAMENTO DO PRIMEIRO ATRIBUTO
         * ⭐ Usando SWITCH para obter valores e nomes
         * ════════════════════════════════════════════════════════════
         */
        
        switch (primeira_escolha) {
            case 1: // População
                valor1_atributo1 = (float)populacao1;
                valor2_atributo1 = (float)populacao2;
                strcpy(nome_atributo1, "População");
                // Maior vence
                vencedor_atributo1 = (populacao1 > populacao2) ? 1 : 
                                    (populacao2 > populacao1) ? 2 : 0;
                break;
                
            case 2: // Área
                valor1_atributo1 = area1;
                valor2_atributo1 = area2;
                strcpy(nome_atributo1, "Área");
                vencedor_atributo1 = (area1 > area2) ? 1 : 
                                    (area2 > area1) ? 2 : 0;
                break;
                
            case 3: // PIB
                valor1_atributo1 = pib1;
                valor2_atributo1 = pib2;
                strcpy(nome_atributo1, "PIB");
                vencedor_atributo1 = (pib1 > pib2) ? 1 : 
                                    (pib2 > pib1) ? 2 : 0;
                break;
                
            case 4: // Pontos Turísticos
                valor1_atributo1 = (float)pontos_turisticos1;
                valor2_atributo1 = (float)pontos_turisticos2;
                strcpy(nome_atributo1, "Pontos Turísticos");
                vencedor_atributo1 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 
                                    (pontos_turisticos2 > pontos_turisticos1) ? 2 : 0;
                break;
                
            case 5: // Densidade (menor vence!)
                valor1_atributo1 = densidade_populacional1;
                valor2_atributo1 = densidade_populacional2;
                strcpy(nome_atributo1, "Densidade Populacional");
                // ⚠️ MENOR VENCE!
                vencedor_atributo1 = (densidade_populacional1 < densidade_populacional2) ? 1 : 
                                    (densidade_populacional2 < densidade_populacional1) ? 2 : 0;
                break;
                
            case 6: // PIB per Capita
                valor1_atributo1 = pib_per_capita1;
                valor2_atributo1 = pib_per_capita2;
                strcpy(nome_atributo1, "PIB per Capita");
                vencedor_atributo1 = (pib_per_capita1 > pib_per_capita2) ? 1 : 
                                    (pib_per_capita2 > pib_per_capita1) ? 2 : 0;
                break;
        }
        
        /*
         * ════════════════════════════════════════════════════════════
         * PROCESSAMENTO DO SEGUNDO ATRIBUTO
         * ⭐ Mesma lógica do primeiro atributo
         * ════════════════════════════════════════════════════════════
         */
        
        switch (segunda_escolha) {
            case 1: // População
                valor1_atributo2 = (float)populacao1;
                valor2_atributo2 = (float)populacao2;
                strcpy(nome_atributo2, "População");
                vencedor_atributo2 = (populacao1 > populacao2) ? 1 : 
                                    (populacao2 > populacao1) ? 2 : 0;
                break;
                
            case 2: // Área
                valor1_atributo2 = area1;
                valor2_atributo2 = area2;
                strcpy(nome_atributo2, "Área");
                vencedor_atributo2 = (area1 > area2) ? 1 : 
                                    (area2 > area1) ? 2 : 0;
                break;
                
            case 3: // PIB
                valor1_atributo2 = pib1;
                valor2_atributo2 = pib2;
                strcpy(nome_atributo2, "PIB");
                vencedor_atributo2 = (pib1 > pib2) ? 1 : 
                                    (pib2 > pib1) ? 2 : 0;
                break;
                
            case 4: // Pontos Turísticos
                valor1_atributo2 = (float)pontos_turisticos1;
                valor2_atributo2 = (float)pontos_turisticos2;
                strcpy(nome_atributo2, "Pontos Turísticos");
                vencedor_atributo2 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 
                                    (pontos_turisticos2 > pontos_turisticos1) ? 2 : 0;
                break;
                
            case 5: // Densidade (menor vence!)
                valor1_atributo2 = densidade_populacional1;
                valor2_atributo2 = densidade_populacional2;
                strcpy(nome_atributo2, "Densidade Populacional");
                vencedor_atributo2 = (densidade_populacional1 < densidade_populacional2) ? 1 : 
                                    (densidade_populacional2 < densidade_populacional1) ? 2 : 0;
                break;
                
            case 6: // PIB per Capita
                valor1_atributo2 = pib_per_capita1;
                valor2_atributo2 = pib_per_capita2;
                strcpy(nome_atributo2, "PIB per Capita");
                vencedor_atributo2 = (pib_per_capita1 > pib_per_capita2) ? 1 : 
                                    (pib_per_capita2 > pib_per_capita1) ? 2 : 0;
                break;
        }
        
        /*
         * ════════════════════════════════════════════════════════════
         * CÁLCULO DAS SOMAS E VENCEDOR FINAL
         * ════════════════════════════════════════════════════════════
         */
        
        soma_carta1 = valor1_atributo1 + valor1_atributo2;
        soma_carta2 = valor2_atributo1 + valor2_atributo2;
        
        // ⭐ OPERADOR TERNÁRIO para determinar vencedor final
        vencedor_final = (soma_carta1 > soma_carta2) ? 1 : 
                        (soma_carta2 > soma_carta1) ? 2 : 0;
        
        /*
         * ════════════════════════════════════════════════════════════
         * EXIBIÇÃO DOS RESULTADOS
         * ════════════════════════════════════════════════════════════
         */
        
        printf("\n\n╔════════════════════════════════════════════════════╗\n");
        printf("║           RESULTADO DA BATALHA ÉPICA!             ║\n");
        printf("╚════════════════════════════════════════════════════╝\n");
        
        printf("\n⚔️  ATRIBUTOS ESCOLHIDOS:\n");
        printf("   1º: %s\n", nome_atributo1);
        printf("   2º: %s\n", nome_atributo2);
        
        printf("\n📊 COMPARAÇÃO DETALHADA:\n");
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        
        // Resultado do primeiro atributo
        printf("\n🥇 %s:\n", nome_atributo1);
        printf("   Carta 1 (%s): %.2f\n", cidade1, valor1_atributo1);
        printf("   Carta 2 (%s): %.2f\n", cidade2, valor2_atributo1);
        printf("   Vencedor: %s\n", 
               vencedor_atributo1 == 1 ? cidade1 : 
               vencedor_atributo1 == 2 ? cidade2 : "EMPATE");
        
        // Resultado do segundo atributo
        printf("\n🥈 %s:\n", nome_atributo2);
        printf("   Carta 1 (%s): %.2f\n", cidade1, valor1_atributo2);
        printf("   Carta 2 (%s): %.2f\n", cidade2, valor2_atributo2);
        printf("   Vencedor: %s\n", 
               vencedor_atributo2 == 1 ? cidade1 : 
               vencedor_atributo2 == 2 ? cidade2 : "EMPATE");
        
        // Soma total e vencedor final
        printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("🔢 SOMA DOS ATRIBUTOS:\n");
        printf("   Carta 1 (%s): %.2f\n", cidade1, soma_carta1);
        printf("   Carta 2 (%s): %.2f\n", cidade2, soma_carta2);
        
        printf("\n");
        if (vencedor_final == 1) {
            printf("🏆🎉 VENCEDOR FINAL: CARTA 1 - %s! 🎉🏆\n", cidade1);
            printf("   Diferença: %.2f pontos\n", soma_carta1 - soma_carta2);
        } else if (vencedor_final == 2) {
            printf("🏆🎉 VENCEDOR FINAL: CARTA 2 - %s! 🎉🏆\n", cidade2);
            printf("   Diferença: %.2f pontos\n", soma_carta2 - soma_carta1);
        } else {
            printf("🤝 RESULTADO: EMPATE PERFEITO! 🤝\n");
            printf("   Ambas as cartas têm a mesma pontuação!\n");
        }
        
        printf("\n╔════════════════════════════════════════════════════╗\n");
        printf("║          BATALHA FINALIZADA COM SUCESSO!          ║\n");
        printf("╚════════════════════════════════════════════════════╝\n");
        
    } // Fim do loop principal
    
    /*
     * ====================================================================
     * SEÇÃO 8: FINALIZAÇÃO DO PROGRAMA
     * ====================================================================
     */
    
    printf("\n╔════════════════════════════════════════════════════╗\n");
    printf("║    OBRIGADO POR JOGAR SUPER TRUNFO NÍVEL MESTRE!  ║\n");
    printf("║          Você completou o desafio final!          ║\n");
    printf("╚════════════════════════════════════════════════════╝\n\n");
    
    return 0;
}

