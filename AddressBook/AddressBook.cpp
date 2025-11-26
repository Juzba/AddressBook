#include <iostream>
#include "Contact.h"
#include "Func.h"
#include <vector>


int main()
{
	std::vector<Contact> contacts;

	Contact personOne(1, "John Doe", "123-456-7890", "john.doe@example.com");
	Contact personTwo(2, "Jane Smith", "987-654-3210", "jane.smith@example.com");
	Contact personThree(3, "Alice Johnson", "555-123-4567", "alice.johnson@example.com");





	contacts.push_back(personOne);
	contacts.push_back(personTwo);
	contacts.push_back(personThree);

	bool start = true;


	while (start)
	{
		char c = ' ';
		system("cls");
		system("color 0A");


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
		case('1'): add_contact(contacts); return_main(); break;
		case('2'): view_contacts(contacts, "color 0A"); return_main(); break;
		case('3'): delete_contact(contacts); return_main(); break;
		case('4'): break;
		case('5'): start = false; break;

		default: std::cout << "Invalid option!"; break;
		}
	}

	std::cout << "\nProgram End\n";
}


