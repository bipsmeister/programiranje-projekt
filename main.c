#include <stdio.h>
#include <stdlib.h>
#include "header.h"


char simbol = 'X';
int rez = 0;

int main(){
  
  
  struct igrac igraci[2];
  igraci[0].score = 0;
  igraci[1].score = 0;
  
  int novaIgra;
  
  
  printf("Pravila igre: Postavi tri simbola u istom redu, stupcu ili po dijagonali kako bi pobjedio!"\n);
  printf("Unesite ime prvog igraca:\n");
  printf("Unesite ime drugog igraca:\n");
  scanf("%s, igraci[0].ime);
  scanf("%s, igraci[1].ime);
        
   
