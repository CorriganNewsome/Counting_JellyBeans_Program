//Corrigan Newsome cnewsome2@cnm.edu
// Loop Writing Demo

//Driver.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int repeat{ 0 };
	string another{ "yes" };

	cout << "\n How many iterations (please enter a whole number)? ";
	cin >> repeat;
	cin.ignore();

	/*while (repeat > 0)
	{
		cout << "\n This is iteration " << repeat-- << endl;
}*/

	/*do {
		cout << "\n This is iteration " << --repeat << endl;
		cout << "\Do Another iteration? (yes/no)? ";
		getline(cin, another);
	} while (another == "yes");*/

	//int i{ 0 };
	for (int i{ 0 }; i < 10; ++i)
	{
		cout << "\n Hello World number " << i << endl;
	}
	return 0;
}