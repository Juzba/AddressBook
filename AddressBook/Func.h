#pragma once
#include <vector>
#include "Contact.h"
#include <iostream>
#include <limits>


void add_contact(std::vector<Contact>& contacts) {
	int id = 0;
	std::string name, phone, email;

	system("cls");
	system("color 0C");

	id = contacts.size() + 1;

	std::cout << "Add Contact\n";

	std::cout << "\nName: ";	std::getline(std::cin, name);
	std::cout << "\nPhone: ";	std::getline(std::cin, phone);
	std::cout << "\nEmail: ";	std::getline(std::cin, email);


	Contact newContact(id, name, phone, email);
	contacts.push_back(newContact);

	std::cout << "\n\nContact added successfully!";
}





void view_contacts(const std::vector<Contact>& contacts, const char* color) {

	system("cls");
	system(color);

	for (const auto& contact : contacts) {
		std::cout << "ID: " << contact.id << "\n";
		std::cout << "Name: " << contact.name << "\n";
		std::cout << "Phone: " << contact.phone << "\n";
		std::cout << "Email: " << contact.email << "\n";
		std::cout << "-----------------------\n";
	}
}


void delete_contact(std::vector<Contact>& contacts) {
	unsigned int index;

	view_contacts(contacts, "color 0C");

	std::cout << "\n\nInsert index number to delete contact.:\n";

	// get index to delete
	while (true)
	{
		std::cin >> index;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter a valid index number:\n";
			continue;
		}

		if (index > 0 && index <= contacts.size()) break;

		std::cout << "Index out of range. Please enter a valid index number:\n";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}


	// potrebuji odstranit polozku s urcitym id
	//contacts.erase(contacts.begin() + index - 1);


}


void return_main() {
	std::string str;
	std::getline(std::cin, str);
}