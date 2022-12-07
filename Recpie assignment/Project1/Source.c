// Aleksandar Grujicic
// Curtis Bauman
// Group 29 Group Assignment
// PROG71985F22
// Fall 2022
// Recipe Manager

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAXLEN 20
#define MAX_INGREDIENT_LIST_LENGTH 15  //Steve Probably expects this to not be an arbitrary max

typedef struct entry
{
	bool arrayMemberStatus;
	char Ingredient[MAXLEN];
	char UnitOfMeasure[MAXLEN];
	int amount;

} ENTRY;

typedef struct data
{

	ENTRY recipe;

} DATA;




void printTopOfMenuBanner(void);
void printMenu(void);




int main()
{
	DATA info[MAX_INGREDIENT_LIST_LENGTH];
	ENTRY name;



}

void printTopOfMenuBanner(void)
{
	printf("\n\n***************************************************\n");
	printf("*                                                 *\n");
	printf("*       	Recipe Manager System	          *\n");
	printf("*                                                 *\n");
	printf("***************************************************\n\n\n");

}


void printMenu(void)
{
	printf("To choose a function, enter its letter label:\n");
	printf("a) Add new ingredient\n");
	printf("b) Delete an existing ingredient\n");
	printf("c) Update an existing ingredient\n");
	printf("d) Display single Ingredient\n");
	printf("e) Display ingredients in given range\n");
	printf("f) Display all ingredients\n");
	printf("g) Search for an ingredient\n");
	printf("h) Return to previous menu\n");
}