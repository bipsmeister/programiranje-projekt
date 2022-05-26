#include <stdio.h>
#include <stdlib.h>

char simbol;
int igrac = 1, i, odabir;




void ploca(char* x)
{
	system("cls");
	printf("\n\t\t    Krizic kruzic igra  \n");
	printf("\n\t\t         |         |        ");
	printf("\n\t\t     %c   |    %c    |   %c   "
	printf("\n\t\t --------|---------|--------");
	printf("\n\t\t     %c   |    %c    |   %c   ")
	printf("\n\t\t --------|---------|--------");
	printf("\n\t\t     %c   |    %c    |   %c   ")
	printf("\n\t\t         |         |        \n");

}

char pobjedaXO(char* x)
  if (*(x + 1) == 'X' && *(x + 2) == 'X' && *(x + 3) == 'X')
	{
		return 'X';
	}
 elseif (*(x + 4) == 'X' && *(x + 5) == 'X' && *(x + 6) == 'X')
	{
		return 'X';
	}
elseif (*(x + 7) == 'X' && *(x + 8) == 'X' && *(x + 9) == 'X')
	{
		return 'X';
	}
elseif (*(x + 0) == 'X' && *(x + 1) == 'X' && *(x + 2) == 'X')
	{
		return 'X';
	}
elseif (*(x + 1) == 'X' && *(x + 4) == 'X' && *(x + 7) == 'X')
	{
		return 'X';
	}
elseif (*(x + 2) == 'X' && *(x + 5) == 'X' && *(x + 8) == 'X')
	{
		return 'X';
	}
elseif (*(x + 3) == 'X' && *(x + 6) == 'X' && *(x + 9) == 'X')
	{
		return 'X';
	}
elseif (*(x + 1) == 'X' && *(x + 5) == 'X' && *(x + 9) == 'X')
	{
		return 'X';
	}
elseif (*(x + 3) == 'X' && *(x + 5) == 'X' && *(x + 7) == 'X')
	{
		return 'X';
	}
         

         
if (*(x + 1) == 'X' && *(x + 2) == 'X' && *(x + 3) == 'X')
	{
		return 'O';
	}
elseif (*(x + 4) == 'X' && *(x + 5) == 'X' && *(x + 6) == 'X')
	{
		return 'O';
	}        
elseif (*(x + 7) == 'X' && *(x + 8) == 'X' && *(x + 9) == 'X')
	{
		return 'O';
	}
elseif (*(x + 1) == 'X' && *(x + 4) == 'X' && *(x + 7) == 'X')
	{
		return 'O';
	}


int main() {
  
  
  int polje[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', } 
  int igrac
