#include <iostream>
#include <string>
#include<math.h>

using namespace std;

int main() {

	int year;
	cout << "Enter what year you want: ";
	cin >> year;

	int month;
	cout << "Enter what month (As a number) do you want to look at: ";
	cin >> month;


	switch (month) {

		case 1:
			printf("January has 31 days in the month");
			break;
		case 2:
			if (((year % 400 == 0) && (year % 100 != 0)) || (year % 4 == 0)) {

				printf("\nThis year in %d has 29 days in Febuary",year);
			}
			else {
				printf("\nFebuary only has 28 days this year.");
			}
			break;
		case 3:
			printf("\nMarch has 31 days in %d. ", year);
			break;
		case 4:
			printf("\nApril has 30 days in %d. ", year);
			break;
		case 5:
			printf("\nMay has 31 days in %d. ", year);
			break;
		case 6:
			printf("\nJune has 30 days in %d. ", year);
			break;
		case 7:
			printf("\nJuly has 31 days in %d. ", year);
			break;
		case 8:
			printf("\nAugust has 31 days in %d. ", year);
			break;
		case 9:
			printf("\nSeptember has 30 days in %d. ", year);
			break;
		case 10:
			printf("\nOctober has 31 days in %d. ", year);
			break;
		case 11:
			printf("\nNovember has 30 days in %d. ", year);
			break;
		case 12:
			printf("\nDecember has 31 days in %d. ", year);
			break;
		default:
			printf("\nthis is not a valid month.\n");
			break;

		}
		
}