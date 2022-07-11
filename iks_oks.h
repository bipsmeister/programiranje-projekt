#ifndef PROGRAMIRANJE_PROJEKT_IKS_OKS_H
#define PROGRAMIRANJE_PROJEKT_IKS_OKS_H

#include <stdbool.h>
#define DEFAULT_STRING_LENGTH 1024

typedef struct {
    int score;
    char* ime;
    char igracIksOksZnak;
} igrac;

static const char IGRAC1_ZNAK = 'X';
static const char IGRAC2_ZNAK = 'O';
static const char PRAZNO_POLJE_ZNAK = '-';
static const char* LOG_FILE_NAME = "winstreaks.txt";

void ispisiPlocu(char** polje);
bool provjeriPobjedu(char** polje, char zadnjiIgracIksOksZnak);
bool napraviPotez(char** polje, int x, int y, char zadnjiIgracIksOksZnak);
bool nastavitiIgru();
void resetiratiPolje(char** polje);
void partija(char** polje, igrac* igraci, FILE* file, int* currWinStreak, char* lastWinner);
void cleanUp(char** polje, igrac* igraci, FILE* logFile);


#endif //PROGRAMIRANJE_PROJEKT_IKS_OKS_H
