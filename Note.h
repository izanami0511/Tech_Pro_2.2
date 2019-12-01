#pragma once
#include <iostream>
#include <string>

using namespace std;

class Note
{
	string *FirstName;
	string *Surname;
	string *PhoneNumber;
	int **BirthDay;
	int size;
	
public:
	Note();
	Note(Note& op);
	Note(string *op1, string *op2, string *op3, int op4, int **op5);
	~Note();

	void append();
	void print();
	void sort();

	void setFirstName(string *op) { FirstName = op; }
	string getFirstName() { return *FirstName; }
	void setSurname(string *op) { Surname = op; }
	string getSurname() { return *Surname; }
	void setPhoneNumber(string *op) { PhoneNumber = op; }
	string getPhoneNumber() { return *PhoneNumber; }
};

