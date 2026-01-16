#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>

#define DIA 20
#define MES 8
#define ANO 2024

struct srt_datanasc
{
    int dia, mes, ano;
};

struct srt_afinidades
{
    char time[32], equipe[16], esporte[32], ocupacao[24], cidade[32], cor[16], sabor[8], religiao[24], musica[12], cinema[16], literatura[12], animal[24], moda[16];
    //Música: Acústica, Bossa Nova, Clássico, Eletrônica, Funk, Gospel, Hip Hop, Jazz, Metal, Pop, Rock, Sertanejo, Pagode, Samba
    //Cinema: Ação, Aventura, Comédia, Criminal, Drama, Documentário, Espionagem, Faroeste, Fantasia, Ficção, Mistério, Musical, Romance, Terror, Suspense
    //Literatura: Lírico, Épico, Dramático
    //Sabores: Doce, Picante, Azedo, Salgado, Amargo
    //Moda: Histórico, Harmonioso, Hippie, Natural, Rústico, Esportivo, Moderno, Radical, Civil, Elegante, Fofo
};

struct srt_pess
{
    char nome[100], email[100], fone[16], genero;
    int idade;
    struct srt_datanasc data;
    struct srt_afinidades afinidade;
};

int e_sabor(const int n, char *p)
{
    if(n < 1 || n > 5) return 0;
    else
    {
        switch(n)
        {
        case 1:
            strcpy(p, "Amargo");
            break;
        case 2:
            strcpy(p, "Azedo");
            break;
        case 3:
            strcpy(p, "Doce");
            break;
        case 4:
            strcpy(p, "Picante");
            break;
        case 5:
            strcpy(p, "Salgado");
            break;
        }
        strcat(p, "\0");
        return 1;
    }
}

int e_cinema(const int n, char *p)
{
    if(n < 1|| n > 15) return 0;
    else
    {
        switch(n)
        {
        case 1:
            strcpy(p, "Ação");
            break;
        case 2:
            strcpy(p, "Aventura");
            break;
        case 3:
            strcpy(p, "Comédia");
            break;
        case 4:
            strcpy(p, "Criminal");
            break;
        case 5:
            strcpy(p, "Drama");
            break;
        case 6:
            strcpy(p, "Documentário");
            break;
        case 7:
            strcpy(p, "Espionagem");
            break;
        case 8:
            strcpy(p, "Faroeste");
            break;
        case 9:
            strcpy(p, "Fantasia");
            break;
        case 10:
            strcpy(p, "Ficção");
            break;
        case 11:
            strcpy(p, "Mistério");
            break;
        case 12:
            strcpy(p, "Musical");
            break;
        case 13:
            strcpy(p, "Romance");
            break;
        case 14:
            strcpy(p, "Terror");
            break;
        case 15:
            strcpy(p, "Suspense");
            break;
        }
        strcat(p, "\0");
        return 1;
    }
}

int e_literatura(const int n, char *p)
{
    if(n < 0 || n > 3) return 0;
    else
    {
        switch(n)
        {
        case 0:
            strcpy(p, "Nada");
            break;
        case 1:
            strcpy(p, "Lírica");
            break;
        case 2:
            strcpy(p, "Épica");
            break;
        case 3:
            strcpy(p, "Dramática");
            break;
        }
        strcat(p, "\0");
        return 1;
    }
}

int e_equipe(const int n, char *p)
{
    if(n < 0 || n > 4) return 0;
    else
    {
        switch(n)
        {
        case 0:
            strcpy(p, "Nada");
            break;
        case 1:
            strcpy(p, "Atrôpelando");
            break;
        case 2:
            strcpy(p, "Máfia da Graxa");
            break;
        case 3:
            strcpy(p, "TNT");
            break;
        case 4:
            strcpy(p, "Trio Eletro");
            break;

        }
        strcat(p, "\0");
        return 1;
    }
}

int e_musica(const int n, char *p)
{
    if(n < 1 || n > 16) return 0;
    else
    {
        switch(n)
        {
        case 1:
            strcpy(p, "Acústica");
            break;
        case 2:
            strcpy(p, "Bossa Nova");
            break;
        case 3:
            strcpy(p, "Clássico");
            break;
        case 4:
            strcpy(p, "Eletrônica");
            break;
        case 5:
            strcpy(p, "Funk");
            break;
        case 6:
            strcpy(p, "Gospel");
            break;
        case 7:
            strcpy(p, "Hip Hop");
            break;
        case 8:
            strcpy(p, "House");
            break;
        case 9:
            strcpy(p, "Jazz");
            break;
        case 10:
            strcpy(p, "Lo-fi");
            break;
        case 11:
            strcpy(p, "Metal");
            break;
        case 12:
            strcpy(p, "Pop");
            break;
        case 13:
            strcpy(p, "Rock");
            break;
        case 14:
            strcpy(p, "Sertanejo");
            break;
        case 15:
            strcpy(p, "Pagode");
            break;
        case 16:
            strcpy(p, "Samba");
            break;
        }
        strcat(p, "\0");
        return 1;
    }
}

int e_moda(const int n, char *p)
{
    if(n < 1 || n > 11) return 0;
    else
    {
        switch(n)
        {
        case 1:
            strcpy(p, "Histórico");
            break;
        case 2:
            strcpy(p, "Harmonioso");
            break;
        case 3:
            strcpy(p, "Hippie");
            break;
        case 4:
            strcpy(p, "Natural");
            break;
        case 5:
            strcpy(p, "Rústico");
            break;
        case 6:
            strcpy(p, "Esportivo");
            break;
        case 7:
            strcpy(p, "Moderno");
            break;
        case 8:
            strcpy(p, "Radical");
            break;
        case 9:
            strcpy(p, "Civil");
            break;
        case 10:
            strcpy(p, "Elegante");
            break;
        case 11:
            strcpy(p, "Fofo");
            break;
        }
        strcat(p, "\0");
        return 1;
    }
}

void scanf_cadastro(struct srt_pess *pess)
{
    int i;
    ///Informações Pessoais
    //Nome
    printf("Nome Completo: ");
    gets(pess->nome);
    //Email
    printf("Email: ");
    gets(pess->email);
    //Fone
    printf("Fone: ");
    scanf("%s", &pess->fone);
    //Data de Nascimento
    printf("Data de Nascimento (use DD/MM/YYYY): ");
    scanf("%02d/%02d/%04d", &pess->data.dia, &pess->data.mes, &pess->data.ano);
    pess->idade = ANO - pess->data.ano;
    if(pess->data.mes >= MES && pess->data.dia > DIA) pess->idade--;
    fflush(stdin);
    //Gênero
    printf("Gênero (\'M\' - Masculino, \'F\' - Feminino, \'N\' - Não-Binário, \'O\' - Outro): ");
    do
    {
        pess->genero = toupper(getchar());
        if(pess->genero != 'M' && pess->genero != 'F' && pess->genero != 'N' && pess->genero != 'O') printf("Essa opção não existe! Digite novamente:\n");
    }
    while(pess->genero != 'M' && pess->genero != 'F' && pess->genero != 'N' && pess->genero != 'O');
    fflush(stdin);

    ///Afinidades
    //Time de Futebol
    printf("Time de Futebol (Se não torcer, digite \"Nada\"): ");
    gets(pess->afinidade.time);
    //Equipe Gincaneira
    printf("Equipe Gincaneira:\n\t0) Nada\n\t1) Atrôpelando\n\t2) Máfia da Graxa\n\t3) TNT\n\t4) Trio Eletro\n");
    do
    {
        scanf("%i", &i);
        e_equipe(i, &pess->afinidade.equipe);
        if (e_equipe(i, &pess->afinidade.equipe) == 0) printf("Essa opção não existe! Digite novamente:\n");
    }
    while(e_equipe(i, &pess->afinidade.equipe) == 0);
    fflush(stdin);
    //Esporte
    printf("Esporte (Se não pratica, digite \"Nada\"): ");
    gets(pess->afinidade.esporte);
    //Ocupação
    printf("Ocupação (Se não tiver, digite \"Nada\"): ");
    gets(pess->afinidade.ocupacao);
    //Cidade
    printf("Cidade: ");
    gets(pess->afinidade.cidade);
    //Cor favorita
    printf("Cor favorita: ");
    gets(pess->afinidade.cor);
    //Sabor
    printf("Sabor predileto (1. Amargo, 2. Azedo, 3. Doce, 4. Picante, 5. Salgado): ");
    do
    {
        scanf("%i", &i);
        e_sabor(i, &pess->afinidade.sabor);
        if (e_sabor(i, &pess->afinidade.sabor) == 0) printf("Essa opção não existe! Digite novamente:\n");
    }
    while(e_sabor(i, &pess->afinidade.sabor) == 0);
    //Religião
    printf("Religião (Se não acredita, digite \"Nada\"): ");
    scanf("%s", &pess->afinidade.religiao);
    fflush(stdin);
    //Animal Favorito
    printf("Animal favorito: ");
    scanf("%s", &pess->afinidade.animal);
    //Musica
    printf("Música (1. Acústica, 2. Bossa Nova, 3. Clássico, 4. Eletrônica, 5. Funk, 6. Gospel, 7. Hip Hop, 8. House, 9. Jazz, 10. Lo-fi, 11. Metal, 12. Pop, 13. Rock, 14. Sertanejo, 15. Pagode, 16. Samba):\n");
    do
    {
        scanf("%i", &i);
        e_musica(i, &pess->afinidade.musica);
        if (e_musica(i, &pess->afinidade.musica) == 0) printf("Essa opção não existe! Digite novamente:\n");
    }
    while(e_musica(i, &pess->afinidade.musica) == 0);
    //Cinema
    printf("Cinema (1. Ação, 2. Aventura, 3. Comédia, 4. Criminal, 5. Drama, 6. Documentário, 7. Espionagem, 8. Faroeste, 9. Fantasia, 10. Ficção, 11. Mistério, 12. Musical, 13. Romance, 14. Terror, 15. Suspense):\n");
    do
    {
        scanf("%i", &i);
        e_cinema(i, &pess->afinidade.cinema);
        if (e_cinema(i, &pess->afinidade.cinema) == 0) printf("Essa opção não existe! Digite novamente:\n");
    }
    while(e_cinema(i, &pess->afinidade.cinema) == 0);
    //Literatura
    printf("Literatura (0. Nada, 1. Lírica (poesia), 2. Épica (prosa), 3. Dramática (teatro)):\n");
    do
    {
        scanf("%i", &i);
        e_literatura(i, &pess->afinidade.literatura);
        if (e_literatura(i, &pess->afinidade.literatura) == 0) printf("Essa opção não existe! Digite novamente:\n");
    }
    while(e_literatura(i, &pess->afinidade.literatura) == 0);
    //Moda
    printf("Estilo (1. Histórico, 2. Harmonioso, 3. Hippie, 4. Natural, 5. Rústico, 6. Esportivo, 7. Moderno, 8. Radical, 9. Civil, 10. Elegante, 11. Fofo):\n");
    do
    {
        scanf("%i", &i);
        e_moda(i, &pess->afinidade.moda);
        if(e_moda(i, &pess->afinidade.moda) == 0) printf("Essa opção não existe! Digite novamente:\n");
    }
    while(e_moda(i, &pess->afinidade.moda) == 0);
    fflush(stdin);
    printf("Cadastro concluído.");
    getch();
}

void printf_cadastro(const struct srt_pess *pess, int mode)
{
    printf("Nome Completo: %s\n", pess->nome);
    printf("Email: %s\n", pess->email);
    printf("Fone: %s\n", pess->fone);
    printf("Data de Nascimento: %02d/%02d/%02d (%d anos)\n", pess->data.dia, pess->data.mes, pess->data.ano, pess->idade);
    printf("Gênero: %c\n", pess->genero);
    if(mode == 1)
    {
        printf("Time: %s\n", pess->afinidade.time);
        printf("Equipe: %s\n", pess->afinidade.equipe);
        printf("Esporte: %s\n", pess->afinidade.esporte);
        printf("Ocupação: %s\n", pess->afinidade.ocupacao);
        printf("Cidade: %s\n", pess->afinidade.cidade);
        printf("Cor: %s\n", pess->afinidade.cor);
        printf("Sabor: %s\n", pess->afinidade.sabor);
        printf("Religião: %s\n", pess->afinidade.religiao);
        printf("Animal: %s\n", pess->afinidade.animal);
        printf("Música: %s\n", pess->afinidade.musica);
        printf("Cinema: %s\n", pess->afinidade.cinema);
        printf("Literatura: %s\n", pess->afinidade.literatura);
        printf("Estilo: %s\n", pess->afinidade.moda);
    }
}

void fstrabrv(FILE *fp, const char *p){
        for(int q = 0; *p != ' ' && q < 5; p++, q++){
            fprintf(fp, "%c", *p);
        }
        fprintf(fp, ".");
}

void strabrv(const char *p){
        for(int q = 0; *p != ' ' && q < 5; p++, q++){
            printf("%c", *p);
        }
        printf(".");
}

int pesq_criterio(char *mode)
{
    if(strcmp(mode, "nome") == 0)
    {
        return 1;
    }
    else if(strcmp(mode, "email") == 0)
    {
        return 2;
    }
    else if(strcmp(mode, "fone") == 0)
    {
        return 3;
    }
    else if(strcmp(mode, "data") == 0 || strcmp(mode, "data de nascimento") == 0)
    {
        return 4;
    }
    else if(strcmp(mode, "idade") == 0)
    {
        return 5;
    }
    else if(strcmp(mode, "gênero") == 0 || strcmp(mode, "genero") == 0)
    {
        return 6;
    }
    else if(strcmp(mode, "time") == 0 || strcmp(mode, "time de futebol") == 0)
    {
        return 7;
    }
    else if(strcmp(mode, "equipe") == 0 || strcmp(mode, "equipe gincaneira") == 0)
    {
        return 8;
    }
    else if(strcmp(mode, "esporte") == 0)
    {
        return 9;
    }
    else if(strcmp(mode, "ocupação") == 0 || strcmp(mode, "ocupacao") == 0)
    {
        return 10;
    }
    else if(strcmp(mode, "cidade") == 0)
    {
        return 11;
    }
    else if(strcmp(mode, "cor") == 0 || strcmp(mode, "cor favorita") == 0)
    {
        return 12;
    }
    else if(strcmp(mode, "sabor") == 0 || strcmp(mode, "sabor predileto") == 0)
    {
        return 13;
    }
    else if(strcmp(mode, "religião") == 0 || strcmp(mode, "religiao") == 0)
    {
        return 14;
    }
    else if(strcmp(mode, "animal") == 0 || strcmp(mode, "animal favorito") == 0 )
    {
        return 15;
    }
    else if(strcmp(mode, "música") == 0 || strcmp(mode, "musica") == 0)
    {
        return 16;
    }
    else if(strcmp(mode, "cinema") == 0)
    {
        return 17;
    }
    else if(strcmp(mode, "literatura") == 0)
    {
        return 18;
    }
    else if(strcmp(mode, "estilo") == 0 || strcmp(mode, "moda") == 0 )
    {
        return 19;
    }
    else return 0;
}

int pesq_cadastro(FILE *fp, int num, int afin)
{
    int eta = 0;
    char phi[32], *ps, *pf;
    struct srt_pess pess_srch, pess_file;

    printf("Digite um");
    switch(num)
    {
    case 1:
        printf(" nome");
        ps = &pess_srch.nome;
        pf = &pess_file.nome;
        break;
    case 2:
        printf(" email");
        ps = &pess_srch.email;
        pf = &pess_file.email;
        break;
    case 3:
        printf(" telefone");
        ps = &pess_srch.fone;
        pf = &pess_file.fone;
        break;
    case 4:
        printf("a data");
        break;
    case 5:
        printf("a idade");
        break;
    case 6:
        printf(" gênero");
        ps = &pess_srch.genero;
        pf = &pess_file.genero;
        break;
    case 7:
        printf(" time");
        ps = &pess_srch.afinidade.time;
        pf = &pess_file.afinidade.time;
        break;
    case 8:
        printf("a equipe");
        ps = &pess_srch.afinidade.equipe;
        pf = &pess_file.afinidade.equipe;
        break;
    case 9:
        printf(" esporte");
        ps = &pess_srch.afinidade.esporte;
        pf = &pess_file.afinidade.esporte;
        break;
    case 10:
        printf("a opcupação");
        ps = &pess_srch.afinidade.ocupacao;
        pf = &pess_file.afinidade.ocupacao;
        break;
    case 11:
        printf("a cidade");
        ps = &pess_srch.afinidade.cidade;
        pf = &pess_file.afinidade.cidade;
        break;
    case 12:
        printf("a cor");
        ps = &pess_srch.afinidade.cor;
        pf = &pess_file.afinidade.cor;
        break;
    case 13:
        printf(" sabor");
        ps = &pess_srch.afinidade.sabor;
        pf = &pess_file.afinidade.sabor;
        break;
    case 14:
        printf("a religião");
        ps = &pess_srch.afinidade.religiao;
        pf = &pess_file.afinidade.religiao;
        break;
    case 15:
        printf(" animal");
        ps = &pess_srch.afinidade.animal;
        pf = &pess_file.afinidade.animal;
        break;
    case 16:
        printf(" gênero musical");
        ps = &pess_srch.afinidade.musica;
        pf = &pess_file.afinidade.musica;
        break;
    case 17:
        printf(" gênero de cinema");
        ps = &pess_srch.afinidade.cinema;
        pf = &pess_file.afinidade.cinema;
        break;
    case 18:
        printf(" gênero de literatura");
        ps = &pess_srch.afinidade.literatura;
        pf = &pess_file.afinidade.literatura;
        break;
    case 19:
        printf(" estilo");
        ps = &pess_srch.afinidade.moda;
        pf = &pess_file.afinidade.moda;
        break;
    }
    printf(" para pesquisar: ");
    fflush(stdin);
    if(num == 4)
    {
        scanf("%02d/%02d/%04d", &pess_srch.data.dia, &pess_srch.data.mes, &pess_srch.data.ano);
        printf("\t--- Início da Pesquisa");
        while(fread(&pess_file, sizeof(pess_file), 1, fp))
        {
            if (pess_srch.data.dia == pess_file.data.dia  && pess_srch.data.mes == pess_file.data.mes && pess_srch.data.ano == pess_file.data.ano)
            {
                eta = 1;
                printf_cadastro(&pess_file, afin);
                printf("\t---\n");
            }
        }
    }
    else if(num == 5)
    {
        scanf("%d", &pess_srch.idade);
        printf("\t--- Início da Pesquisa");
        while(fread(&pess_file, sizeof(pess_file), 1, fp))
        {
            if (pess_srch.idade == pess_file.idade)
            {
                eta = 1;
                printf_cadastro(&pess_file, afin);
                printf("\t---\n");
            }
        }
    }
    else
    {
        gets(ps);
        strlwr(ps);
        printf("\t--- Início da Pesquisa");
        while(fread(&pess_file, sizeof(pess_file), 1, fp))
        {
            strcpy(phi, pf);
            strlwr(phi);
            if (strstr(phi, ps) != NULL)
            {
                eta = 1;
                printf("\n");
                printf_cadastro(&pess_file, afin);
                printf("\t---\n");
            }
        }
    }
    printf("\t--- Fim da Pesquisa\n");
    return eta;
}

float cadastro_cmp(const struct srt_pess *pess_cmp0, const struct srt_pess *pess_cmp1){
    const int w[13]={7, 5, 8, 6, 7, 4, 5, 9, 3, 8, 7, 6, 4};
    float y = 0, omega = 0;
    char *pcmp[2];
    for(int x = 0; x < 13; x++){
        switch(x){
        case 0:
            pcmp[0] = &pess_cmp0->afinidade.time;
            pcmp[1] = &pess_cmp1->afinidade.time;
            break;
        case 1:
            pcmp[0] = &pess_cmp0->afinidade.equipe;
            pcmp[1] = &pess_cmp1->afinidade.equipe;
            break;
        case 2:
            pcmp[0] = &pess_cmp0->afinidade.esporte;
            pcmp[1] = &pess_cmp1->afinidade.esporte;
            break;
        case 3:
            pcmp[0] = &pess_cmp0->afinidade.ocupacao;
            pcmp[1] = &pess_cmp1->afinidade.ocupacao;
            break;
        case 4:
            pcmp[0] = &pess_cmp0->afinidade.cidade;
            pcmp[1] = &pess_cmp1->afinidade.cidade;
            break;
        case 5:
            pcmp[0] = &pess_cmp0->afinidade.cor;
            pcmp[1] = &pess_cmp1->afinidade.cor;
            break;
        case 6:
            pcmp[0] = &pess_cmp0->afinidade.sabor;
            pcmp[1] = &pess_cmp1->afinidade.sabor;
            break;
        case 7:
            pcmp[0] = &pess_cmp0->afinidade.religiao;
            pcmp[1] = &pess_cmp1->afinidade.religiao;
            break;
        case 8:
            pcmp[0] = &pess_cmp0->afinidade.animal;
            pcmp[1] = &pess_cmp1->afinidade.animal;
            break;
        case 9:
            pcmp[0] = &pess_cmp0->afinidade.musica;
            pcmp[1] = &pess_cmp1->afinidade.musica;
            break;
        case 10:
            pcmp[0] = &pess_cmp0->afinidade.cinema;
            pcmp[1] = &pess_cmp1->afinidade.cinema;
            break;
        case 11:
            pcmp[0] = &pess_cmp0->afinidade.literatura;
            pcmp[1] = &pess_cmp1->afinidade.literatura;
            break;
        case 12:
            pcmp[0] = &pess_cmp0->afinidade.moda;
            pcmp[1] = &pess_cmp1->afinidade.moda;
            break;
        }
        if(strcmp(pcmp[0], pcmp[1]) == 0) y+= w[x];
        else if (x != 4 && x != 6 && x != 9 && x != 10 && x != 12 && (strcmp(pcmp[0], "Nada") == 0 | strcmp(pcmp[1], "Nada") == 0)) y += w[x]/2;
    }
    for(int k = 0; k < 13; k++) omega += w[k];
    y/=omega;
    y*=100;
    return y;
}

int main()
{
    FILE *fp;
    setlocale(LC_ALL, "Portuguese");
    char e, gamma[32];

    do
    {
        printf("\tBoas-vindas ao menu do Programa de Cadastros \"Nu\"!\n\nDigite uma das Seguintes Opções:\n\n");
        printf("\t1) Realizar um novo cadastro.\n\t2) Pesquisar um cadastro existente.\n\t3) Gerar a matriz-afinidade de todos os cadastros.\n\nAperte 'ESC' para sair.\n\n");
        e = getch();
        fflush(stdin);
        if(e != 27)
        {
            switch(e)
            {
            default:
                printf("Essa opção não existe!");
                getch();
                break;
            case '1':
                system("cls");
                fp = fopen("Cadastros.txt", "a+t");
                struct srt_pess pess;
                scanf_cadastro(&pess);
                fwrite(&pess, sizeof(pess), 1, fp);
                fclose(fp);
                break;
            case '2':
                printf("Por qual critério você quer pesquisar? ");
                gets(gamma);
                strlwr(gamma);
                fflush(stdin);
                if (pesq_criterio(&gamma) == 0)
                {
                    printf("Esse critério não existe!");
                    getch();
                    break;
                }
                else
                {
                    printf("Exibir cadastros completos? [S/N] ");
                    char a;
                    do
                    {
                        a = getchar();
                        a = tolower(a);
                        if(a != 's' && a != 'n') printf("Essa opção não existe! Digite novamente: ");
                    }
                    while(a != 's' && a != 'n');
                    if(a == 's') a = 1;
                    else if (a == 'n') a = 0;
                    system("cls");
                    fp = fopen("Cadastros.txt", "r+t");
                    if(pesq_cadastro(fp, pesq_criterio(gamma), a) == 0) printf("Não foi encontrado nenhum cadastro com esse critério.\n");
                    fclose(fp);
                }
                fflush(stdin);
                getch();
                break;
            case '3':
                fp = fopen("Cadastros.txt", "rt");
                FILE *fq = fopen("Cadastros.txt", "rt"), *fr = fopen("Matriz_Afinidade.txt", "w");
                int nu = 0;
                struct srt_pess pess_read[2];
                printf("Exibindo a matriz-afinidade:\n");
                while(fread(&pess_read[0], sizeof(pess_read[0]), 1, fp)){
                        nu++;
                        printf("\t");
                        fprintf(fr, "\t");
                        strabrv(&pess_read[0].nome);
                        fstrabrv(fr, &pess_read[0].nome);
                }
                rewind(fp);
                float matriz_afinidade[nu][nu];
                for(int i = 0; i < nu; i++)
                {
                    fread(&pess_read[0], sizeof(pess_read[0]), 1, fp);
                    for(int j = 0; j < nu; j++)
                    {
                        fread(&pess_read[1], sizeof(pess_read[1]), 1, fq);
                        matriz_afinidade[i][j] = cadastro_cmp(&pess_read[0], &pess_read[1]);
                        if(j == 0){
                            printf("\n");
                            fprintf(fr, "\n");
                            strabrv(&pess_read[0].nome);
                            fstrabrv(fr, &pess_read[0].nome);
                            printf("\t");
                            fprintf(fr, "\t");
                        }
                        printf("%3.f%%\t", matriz_afinidade[i][j]);
                        fprintf(fr, "%3.f%%\t", matriz_afinidade[i][j]);
                    }
                    rewind(fq);
                }
                fclose(fp);
                fclose(fq);
                fclose(fr);
                getch();
                break;
            }
            system("cls");
        }
        else
        {
            printf("Adeus! Espero te ver novamente ;)\n");
        }
    }
    while(e != 27);
    return 0;
}
