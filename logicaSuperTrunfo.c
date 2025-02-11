#include <stdio.h>

int main() {
    int densidadePopulacionalA = 1200, densidadePopulacionalB = 1500;
    int areaA = 600, areaB = 550;
    int pibA = 500000, pibB = 450000;
    int pibPerCapitaA = 25000, pibPerCapitaB = 22000;
    int pontosTuristicosA = 10, pontosTuristicosB = 8;

    int superPoderA = densidadePopulacionalA + areaA + pibA + pibPerCapitaA + pontosTuristicosA;
    int superPoderB = densidadePopulacionalB + areaB + pibB + pibPerCapitaB + pontosTuristicosB;

    if (densidadePopulacionalA < densidadePopulacionalB) {
        printf("A Carta A vence a Carta B com sua densidade populacional de %d\n", densidadePopulacionalA);
    } else if (densidadePopulacionalB < densidadePopulacionalA) {
        printf("A Carta B vence a Carta A com sua densidade populacional de %d\n", densidadePopulacionalB);
    } else {
        printf("As cartas têm a mesma densidade populacional de %d\n", densidadePopulacionalA);
    }

    if (areaA > areaB) {
        printf("A Carta A vence a Carta B com sua área de %d Km²\n", areaA);
    } else if (areaB > areaA) {
        printf("A Carta B vence a Carta A com sua área de %d Km²\n", areaB);
    } else {
        printf("As cartas têm a mesma área de %d Km²\n", areaA);
    }

    if (pibA > pibB) {
        printf("A Carta A vence a Carta B com seu PIB de R$ %d\n", pibA);
    } else if (pibB > pibA) {
        printf("A Carta B vence a Carta A com seu PIB de R$ %d\n", pibB);
    } else {
        printf("As cartas têm o mesmo PIB de R$ %d\n", pibA);
    }

    if (pibPerCapitaA > pibPerCapitaB) {
        printf("A Carta A vence a Carta B com seu PIB per capita de R$ %d\n", pibPerCapitaA);
    } else if (pibPerCapitaB > pibPerCapitaA) {
        printf("A Carta B vence a Carta A com seu PIB per capita de R$ %d\n", pibPerCapitaB);
    } else {
        printf("As cartas têm o mesmo PIB per capita de R$ %d\n", pibPerCapitaA);
    }

    if (pontosTuristicosA > pontosTuristicosB) {
        printf("A Carta A vence a Carta B com %d pontos turísticos\n", pontosTuristicosA);
    } else if (pontosTuristicosB > pontosTuristicosA) {
        printf("A Carta B vence a Carta A com %d pontos turísticos\n", pontosTuristicosB);
    } else {
        printf("As cartas têm a mesma quantidade de pontos turísticos: %d\n", pontosTuristicosA);
    }

    printf("\nSuper Poder da Carta A: %d\n", superPoderA);
    printf("Super Poder da Carta B: %d\n", superPoderB);

    if (superPoderA > superPoderB) {
        printf("A Carta A vence a Carta B pelo Super Poder!\n");
    } else if (superPoderB > superPoderA) {
        printf("A Carta B vence a Carta A pelo Super Poder!\n");
    } else {
        printf("As cartas têm o mesmo Super Poder!! Empate!\n");
    } 

    return 0;
}
