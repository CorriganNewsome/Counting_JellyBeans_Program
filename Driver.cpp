//Corrigan Newsome cnewsome2@cnm.edu
//Demo on Output formatting and strings

//Driver.cpp

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

	const double PI = 3.14592653589793;
	double feet = 5280;
	double number = 123.456789;

	//First write values
	cout.precision(5);
	cout.setf(ios::showpoint | ios::fixed);
	cout << "\n First write, not setting any flags"
		<< "\n Pi = " << PI
		<< "\n Feet = " << feet
		<< "\n Number = " << number << endl;

	//Data is automatically right-justified within the
	//setw() field width size
	cout << "\n Write with a setw(12)"
		<< "\n    Pi = " << setw(12) << PI
		<< "\n   Feet = " << setw(12) << feet
		<< "\n Number = " << setw(12) << number << endl;
	cout.unsetf(ios::fixed);
	cout << "\n Write with scientific notation"
		<< setiosflags(ios::scientific)
		<< "\n    Pi = " << setw(12) << PI
		<< "\n   Feet = " << setw(12) << feet
		<< "\n Number = " << setw(12) << number << endl;


	//Now to strings, declare three string objects.
	string name;
	string school;
	string favLang{ "C++, of course" };

	cout << "\n C++ Programming Student Demographics";
	cout << "\n Please enter your name:  ";
	getline(cin, name);

	cout << "\n Please enter your school: ";
	getline(cin, school);

	cout << "\n Programming Student Data: "
		<< "\n Name: " << name
		<< "\n School: " << school
		<< "\n Favorite Language: " << favLang << endl;

	//declare 2 string objects
	string sentence;
	string word;

	cout << "\n String Demo";
	cout << "\n Please enter a sentence:  \n ==> ";
	getline(cin, sentence);

	cout << "\n Please enter a word: ==> ";
	getline(cin, word);

	//how many characters in each string?
	int sentSize = sentence.size();
	int wordSize = word.size();

	//Search the sentence to find the word in it.
	int wordInSentence = sentence.find(word);

	cout << "\n String Demo Results"
		<< "\n Sentence: " << sentence
		<< "\n Word: " << word
		<< "\n Sentence size: " << sentSize
		<< "\n Word size: " << wordSize
		<< "\n Word location in Sentence "
		<< "(-1 not in sentence ): " << wordInSentence;

	return 0;
}