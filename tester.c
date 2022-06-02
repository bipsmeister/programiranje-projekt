#include <stdio.h>
#include <stdlib.h>

char simbol;
int igrac = 1, i, odabir;




void ploca(char* x)
{

	printf("\n\t\t    Krizic kruzic igra  \n");
	printf("\n\t\t         |         |        ");
	printf("\n\t\t     %c   |    %c    |   %c, a[1], a[2], a[3]   "
	printf("\n\t\t --------|---------|--------");
	printf("\n\t\t     %c   |    %c    |   %c, a[4], a[5], a[6]   ")
	printf("\n\t\t --------|---------|--------");
	printf("\n\t\t     %c   |    %c    |   %c, a[7], a[8], a[9]   ")
	printf("\n\t\t         |         |        \n");

}

char pobjedaXO(char* x)
  if (*(x + 1) == 'X' && *(x + 2) == 'X' && *(x + 3) == 'X')
	{
		return 'X';
	}
 else if (*(x + 4) == 'X' && *(x + 5) == 'X' && *(x + 6) == 'X')
	{
		return 'X';
	}
else if (*(x + 7) == 'X' && *(x + 8) == 'X' && *(x + 9) == 'X')
	{
		return 'X';
	}
else if (*(x + 0) == 'X' && *(x + 1) == 'X' && *(x + 2) == 'X')
	{
		return 'X';
	}
else if (*(x + 1) == 'X' && *(x + 4) == 'X' && *(x + 7) == 'X')
	{
		return 'X';
	}
else if (*(x + 2) == 'X' && *(x + 5) == 'X' && *(x + 8) == 'X')
	{
		return 'X';
	}
else if (*(x + 3) == 'X' && *(x + 6) == 'X' && *(x + 9) == 'X')
	{
		return 'X';
	}
else if (*(x + 1) == 'X' && *(x + 5) == 'X' && *(x + 9) == 'X')
	{
		return 'X';
	}
else if (*(x + 3) == 'X' && *(x + 5) == 'X' && *(x + 7) == 'X')
	{
		return 'X';
	}
         

         
if (*(x + 1) == 'O' && *(x + 2) == 'O' && *(x + 3) == 'O')
	{
		return 'O';
	}
else if (*(x + 4) == 'O' && *(x + 5) == 'O' && *(x + 6) == 'O')
	{
		return 'O';
	}        
else if (*(x + 7) == 'O' && *(x + 8) == 'O' && *(x + 9) == 'O')
	{
		return 'O';
	}
else if (*(x + 1) == 'O' && *(x + 4) == 'O' && *(x + 7) == 'O')
	{
		return 'O';
	}
else if (*(x + 2) == 'O' && *(x + 5) == 'O' && *(x + 8) == 'O')
	{
		return 'O';
	}
else if (*(x + 3) == 'O' && *(x + 6) == 'O' && *(x + 9) == 'O')
	{
		return 'O';
	}
else if (*(x + 1) == 'O' && *(x + 5) == 'O' && *(x + 9) == 'O')
	{
		return 'O';
	}
else if (*(x + 3) == 'O' && *(x + 5) == 'O' && *(x + 7) == 'O')
	{
		return 'O';
	}	       

	       
	       int main() {
  
  
  int polje[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', } 
  int igrac
