#include <iostream>


//Možnosti: Přidat kontakt, Vypsat kontakty, Smazat kontakt, Hledat kontakt, Ukončit.


int main()
{
	bool start = true;
	system("color 0A");


	while (start)
	{
		char c = ' ';
		system("cls");


		std::cout << "Address Book\n\n";
		std::cout << "1) - Add Contact\n";
		std::cout << "2) - View Contacts\n";
		std::cout << "3) - Delete Contact\n";
		std::cout << "4) - Search Contact\n";
		std::cout << "5) - Exit\n\n";

		std::cin >> c;
		std::cin.ignore(100, '\n');

		switch (c)
		{
		case('1'): break;
		case('2'): break;
		case('3'): break;
		case('4'): break;
		case('5'): start = false; break;

		default: std::cout << "Invalid option!"; break;
		}
	}

	std::cout << "\nProgram End\n";
}
