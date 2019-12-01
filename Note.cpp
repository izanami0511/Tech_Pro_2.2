#include "Note.h"


Note::Note()
{
	FirstName = new string;
	Surname = new string;
	PhoneNumber = new string;
	size = 0;
	BirthDay = new int* [3];
	for (int i = 0; i < 3; ++i) {
		BirthDay[i] = new int;
	}
}

Note::Note(Note & op)
{
	op.FirstName = FirstName;
	op.Surname = Surname;
	op.PhoneNumber = PhoneNumber;
	op.size = size;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < 3; ++j) {
			op.BirthDay[i][j] = BirthDay[i][j];
		}
	}
}

Note::Note(string *op1, string *op2, string *op3, int op4, int **op5)
{
	FirstName = op1;
	Surname = op2;
	PhoneNumber = op3;
	size = op4;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < 3; ++j) {
			BirthDay[i][j] = op5[i][j];
		}
	}
}


Note::~Note()
{
	delete[]BirthDay;
}

void Note::append()
{
	cout << "Enter First Name of person: " << endl << "> ";
	cin >> *FirstName;
	cout << "Enter Surname of person: " << endl << "> ";
	cin >> *Surname;
	cout << "Enter Phone Number of person (ex. +79995201703): " << endl << "> ";
	cin >> *PhoneNumber;
	cout << "Enter person's Day of Birthday" << endl << "> ";
	cin >> BirthDay[size][0];
	cout << "Enter person's Month of Birthday" << endl << "> ";
	cin >> BirthDay[size][1];
	cout << "Enter person's Year of Birthday" << endl << "> ";
	cin >> BirthDay[size][2];
	size++;
}

void Note::print()
{
	for (int i = 0; i < size; ++i) {

		cout << "First Name: ";
		cout << FirstName[i] << endl;
		cout << "Surname: ";
		cout << Surname[i] << endl;
		cout << "Phone Number: ";
		cout << PhoneNumber[i] << endl;
		cout << "Birth Day: ";
		cout << BirthDay[i][0] << "." << BirthDay[i][1] << "." << BirthDay[i][2] << endl;
	}
}
