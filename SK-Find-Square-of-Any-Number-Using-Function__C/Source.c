#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

int func(int);

int main() {
	int no, square;

	printf("\n Enter an no : ");
	scanf("%d", &no);

	square = func(no);

	printf("\n Square of no is : %d ", square);

	_getch();
}

int func(int temp) {
	return temp * temp;
}