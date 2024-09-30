#include <iostream>
#include <windows.h>

using namespace std;

//mulFunction
void multiplication() {

calcAgain:
	system("cls");
	double n1, n2;
	double st;

	cout << "\n\n\t\t\tEnter first number here: ";
	cin >> n1;

	cout << "\t\t\tEnter second number here: ";
	cin >> n2;

	st = n1 * n2;

	cout << "\n\t\t\tYour number is: " << st << endl;

askAgain:

	int variant;
	cout << "\n\t\t\tFor trying again press 1, For exit press 2: ";
	cin >> variant;

	if (variant == 1) {
		goto calcAgain;
	}
	else if (variant == 2) {
		goto ext;
	}
	else {
		cout << "\n\t\t\tInvalid input,try again.";
		Sleep(3000);
		system("cls");
		goto askAgain;
	};

ext:
	return;
};
//divFunction
void Division() {

calcAgain:
	system("cls");
	double n1, n2;
	double st;

	cout << "\n\n\t\t\tEnter first number here: ";
	cin >> n1;

	cout << "\t\t\tEnter second number here: ";
	cin >> n2;

	if (n2 == 0) {
		cout << "\n\t\t\tCannot divide by zero.";
		Sleep(3000);
		goto calcAgain;
	}

	st = n1 / n2;

	cout << "\n\t\t\tYour number is: " << st << endl;

askAgain:

	int variant;
	cout << "\n\t\t\tFor trying again press 1, For exit press 2: ";
	cin >> variant;

	if (variant == 1) {
		goto calcAgain;
	}
	else if (variant == 2) {
		goto ext;
	}
	else {
		cout << "\n\t\t\tInvalid input,try again.";
		Sleep(3000);
		system("cls");
		goto askAgain;
	};

ext:
	return;
}
//addFunction
void Addition() {

calcAgain:
	system("cls");
	double n1, n2;
	double st;

	cout << "\n\n\t\t\tEnter first number here: ";
	cin >> n1;

	cout << "\t\t\tEnter second number here: ";
	cin >> n2;

	st = n1 + n2;

	cout << "\n\t\t\tYour number is: " << st << endl;

askAgain:

	int variant;
	cout << "\n\t\t\tFor trying again press 1, For exit press 2: ";
	cin >> variant;

	if (variant == 1) {
		goto calcAgain;
	}
	else if (variant == 2) {
		goto ext;
	}
	else {
		cout << "\n\t\t\tInvalid input,try again.";
		Sleep(3000);
		system("cls");
		goto askAgain;
	};

ext:
	return;
}
//sunFunction
void Subtraction() {

calcAgain:
	system("cls");
	double n1, n2;
	double st;

	cout << "\n\n\t\t\tEnter first number here: ";
	cin >> n1;

	cout << "\t\t\tEnter second number here: ";
	cin >> n2;

	st = n1 - n2;

	cout << "\n\t\t\tYour number is: " << st << endl;

askAgain:

	int variant;
	cout << "\n\t\t\tFor trying again press 1, For exit press 2: ";
	cin >> variant;

	if (variant == 1) {
		goto calcAgain;
	}
	else if (variant == 2) {
		goto ext;
	}
	else {
		cout << "\n\t\t\tInvalid input,try again.";
		Sleep(3000);
		system("cls");
		goto askAgain;
	};

ext:
	return;
}
//factorialFunction
void Factorial() {

facAgain:
	system("cls");

	double n1;
	double st1 = 1;

	cout << "\n\n\t\t\tPlease enter factorial number: ";
	cin >> n1;

	for (double i = 1; i <= n1; i++) {
		st1 *= i;
	}

	cout << "\n\t\t\tFactorial of " << n1 << " is: " << st1 << endl;

askAgain:

	int variant;
	cout << "\n\t\t\tFor trying again press 1, For exit press 2: ";
	cin >> variant;

	if (variant == 1) {
		goto facAgain;
	}
	else if (variant == 2) {
		goto ext;
	}
	else {
		cout << "\n\t\t\tInvalid input,try again.";
		Sleep(3000);
		system("cls");
		goto askAgain;
	};

ext:

	return;
}
//pwrFunction
void Power() {

pwrAgain:
	system("cls");

	int justNum;
	int pwrNum;
	int svr = 1;

	cout << "\n\n\t\t\tEnter number you want to power: ";
	cin >> justNum;

	cout << "\t\t\tEnter power size: ";
	cin >> pwrNum;

	for (int i = 0; i < pwrNum; i++) {
		svr = svr * justNum;
	}

	cout << "\t\t\tPowered number is: " << svr << endl;

askAgain:

	int variant;
	cout << "\n\t\t\tFor trying again press 1, For exit press 2: ";
	cin >> variant;

	if (variant == 1) {
		goto pwrAgain;
	}
	else if (variant == 2) {
		goto ext;
	}
	else {
		cout << "\n\t\t\tInvalid input,try again.";
		Sleep(3000);
		system("cls");
		goto askAgain;
	};

ext:

	return;
}
//mainBlock
int calculatorBlock() {

loopAgain:
	system("cls");

	cout << "\n\n\t\t\tCalculator on C++" << endl;
	cout << "\t\t\t-----------------" << endl;
	cout << "\t\t\t1.Multiplication\n"
		"\t\t\t2.Division\n"
		"\t\t\t3.Addition\n"
		"\t\t\t4.Subtraction\n"
		"\t\t\t5.Any power of a number\n"
		"\t\t\t6.Factorial\n"
		"\t\t\t7.Exit\n";

	int varPick;

	cout << "\n\t\t\tPlease enter your choice: ";

	while (!(cin >> varPick)) {
		cin.clear();
		cin.ignore(132, '\n');
		goto loopAgain;
	}

	switch (varPick)
	{
	case 1:
		multiplication();
		goto loopAgain;
		break;

	case 2:
		Division();
		goto loopAgain;
		break;

	case 3:
		Addition();
		goto loopAgain;
		break;

	case 4:
		Subtraction();
		goto loopAgain;
		break;

	case 5:
		Power();
		goto loopAgain;
		break;

	case 6:
		Factorial();
		goto loopAgain;
		break;

	case 7:
		exit(0);
		break;

	default:
		cout << "\n\t\t\tInvalid pick,try again.";
		Sleep(2000);
		goto loopAgain;
		break;
	}

	return 0;
}