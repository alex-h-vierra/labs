#include <iostream>
#include <string>

using namespace std;

int main() {
	//problem 1
	for (int row = 0;row < 3;row++) {
		cout << "*";
	}
	cout << endl;
	//problem 2
	for (int row = 0;row < 3;row++) {
		cout << endl;
		for (int col = 0;col < 3;col++) {
			cout << "*";
		}
	}
	cout << endl;

	//problem 3
	for (int b = 0;b < 5;b++) {
		cout << endl;
		for (int a = 0;a < 5;a++) {
			
			if (a == 2 && b == 2) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
	}
	cout << endl;
	//problem 4
		for (int c = 0;c < 4;c++) {
			cout << endl;

			for (int d = 0;d < 4;d++) {
				
				if (c >= d) {
					cout << "*";
				}
				else {
					cout << " ";
				}
		}
	}
		cout << endl;
		//problem 5
		for (int c = 4;c > 0;c--) {
			cout << endl;
			for (int d = 0;d < 5;d++) {
				
				if (c <= d) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		cout << endl;
		//problem 6
		for (int c = 4;c > 0;c--) {
			cout << endl;
			for (int d = 1;d < 5;d++) {

				if (c >= d) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}

		cout << endl;

		
		//problem 7
		for (int c = 0;c < 4;c++) {
			cout << endl;

			for (int d = 0;d < 5;d++) {

				if (c >= d) {
					cout << " ";
				}
				else {
					cout << "*";
				}
			}
		}
		cout << endl;
		//probelm 8
		for (int row = 0;row < 100;) {
			cout << endl;
			for (int col = 0;col < 5;col++) {
				row++;
				cout << row << " ";
			}
		}
		cout << endl;
		//problem 9
		for (int b = 0;b < 6;b++) {
			cout << endl;
			for (int a = 0;a < 6;a++) {

				if ( b==3 && a==2
				    || b==3 && a==3
					|| b==2 && a==2
					|| b==2 && a==3 ) {
					cout << " ";
				}
	
				else {
					cout << "*";
				}
			}
		}
		cout << endl;
		//problem 10
		for (int row = 0;row <= 12;row++) {
			cout << endl;
			for (int col = 0;col <= 12;col++) {
				if (col == row) {
					cout << col * row << " ";
				}
				else {
					cout << col+row<<" ";
				}

				
			}
		}

}