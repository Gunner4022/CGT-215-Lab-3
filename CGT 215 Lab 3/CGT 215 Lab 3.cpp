//Noah Egierski
//9/6/2022
//CGT 215 CG Programming
#include <iostream>

using namespace std;

void printMenu(int& choice) {
	cout << "Welcome to the homemade calculator, please select an operation to perform:" << endl;  
	cout << "1. Addition" << endl;             //    These lines
	cout << "2. Subtraction" << endl;          //    are giving
	cout << "3. Multiplication" << endl;       //     the user 
	cout << "4. Division" << endl;             //   their options
	cout << "\nYour Selection: ";
	cin >> choice;                             //"choice" is which operation was chosen by the user. 
}

void getChoices(float& A, float& B) {
	cout << "Please enter the first value: ";
	cin >> A;                                  //"A" is the first value selected by the user
	cout << "Please enter the second value: ";
	cin >> B;                                  //"B" is the second value selected by the user
	cout << endl;
}

void choiceAddition(float& A, float& B) {                                  //"choiceAddition" takes the values that were determined as "A" and "B", and adds them
	cout << A << " + " << B << " = " << (A + B) << endl;                   //Makes it so that if choiceAddition is called, it shows the numbers added together
} 
void choiceSubtraction(float& A, float& B) {                               //"choiceSubtraction" takes the values that were determined as "A" and "B", and subtracts them
	cout << A << " - " << B << " = " << (A - B) << endl;                   //Makes it so that if choiceSubtraction is called, it shows B subtracted from A
}
void choiceMultiplication(float A, float B) {                              //"choiceMultiplication" takes the values that were determined as "A" and "B", and multiplies them
	cout << A << " * " << B << " = " << (A * B) << endl;                   //Makes it so that if choiceMultiplication is called, it shows the numbers multiplied together
}
void choiceDivision(float& A, float& B) {                                  //"choiceDivision" takes the values that were determined as "A" and "B", and divides them
	cout << A << " / " << B << " = " << (A / B) << endl;                   //Makes it so that if choiceDivision is called, it shows A divided by B
}

	int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {                      //Makes it so that if first choice was 1, it takes A and B and puts them through choiceAddition
		choiceAddition(A , B);
	}
	if (choice == 2) {                      //Makes it so that if first choice was 2, it takes A and B and puts them through choiceSubtraction
		choiceSubtraction(A , B);         
	}
	if (choice == 3) {                      //Makes it so that if first choice was 3, it takes A and B and puts them through choiceMultipliaction    
		choiceMultiplication(A , B);
	}
	if (choice == 4) {                      //Makes it so that if first choice was 4, it takes A and B and puts them through choiceDivision
		choiceDivision(A , B);
	}
	return 0;
} 
