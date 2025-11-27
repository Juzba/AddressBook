#include <iostream>
#include "Contact.h"
#include "Func.h"
#include <vector>
#include "File.h"


int main()
{
	std::vector<Contact> contacts;
	std::string status;

	status = open_contacts(contacts);

	//test_data(contacts);

	bool start = true;
	

	while (start)
	{
		char c = ' ';
		system("cls");
		system("color 0A");


		std::cout << "Address Book\n";
		std::cout << "Status: " << status << "\n\n";

		std::cout << "1) - Add Contact\n";
		std::cout << "2) - View Contacts\n";
		std::cout << "3) - Delete Contact\n";
		std::cout << "4) - Search Contact\n";
		std::cout << "5) - Exit\n\n";

		std::cin >> c;
		std::cin.ignore(100, '\n');

		switch (c)
		{
		case('1'): // Add Contact
			add_contact(contacts);
			save_contacts(contacts);
			return_main();
			break;

		case('2'): // View Contacts
			view_contacts(contacts, "color 0A");
			return_main();
			break;

		case('3'): // Delete Contact
			delete_contact(contacts);
			save_contacts(contacts);
			return_main(); 
			break;

		case('4'): // Search Contact
			break;

		case('5'): // Exit
			start = false; break;

		default: std::cout << "Invalid option!"; break;
		}
	}

	std::cout << "\nProgram End\n";
	return 0;
}


//////