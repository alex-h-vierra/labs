#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

	double base_Salary;
	cout << "What is your Base Salery            :         ";
	cin >> base_Salary;

	double quota;
	cout << "What is the Quota of the month      :         ";
	cin >> quota;

	double worth_Of_Units_Sold;
	cout << "Enter total amount of Units sold    :         ";
	cin >> worth_Of_Units_Sold;

	double commission_Rate;
	cout << "Enter the Commission Rate           :           ";
	cin >> commission_Rate;

	cout <<"--------------------------------------------------\n";

	double monthly_Salary = base_Salary + ((worth_Of_Units_Sold - quota) * commission_Rate);
	cout << setprecision(2) << fixed <<"Base Salary        :        " << base_Salary << endl;

	if (quota <= worth_Of_Units_Sold) {

		cout << "Commission         :        " <<setprecision(2)<<fixed<< ((worth_Of_Units_Sold - quota) * commission_Rate) << endl;
	}
	else {

		cout << "Commission         :        "<< 0.00<<endl;

	}

	double FICA = base_Salary * .0765;
	double federal_Withholding = base_Salary * .25;

	cout << "Gross Pay          :        " <<setprecision(2) <<fixed << base_Salary + commission_Rate << endl;
	cout << "FICA               :        " << FICA<< endl;
	cout << "Federal Witholding :        " << federal_Withholding<< endl;
	cout << "Net Pay            :        " << base_Salary - (FICA + federal_Withholding)<<endl;
}