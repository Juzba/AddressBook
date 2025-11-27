#pragma once
#include <vector>
#include "Contact.h"
#include <iostream>
#include <limits>


void add_contact(std::vector<Contact>& contacts) {
	int id = 1;
	std::string name, phone, email;

	system("cls");
	system("color 0C");

	for (const auto& contact : contacts) {
		if (contact.id != id) break;
		id++;
	}

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
	std::cout << "Insert 0 to cancel\n";

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

		if (index == 0) return;
		if (index > 0 && index <= contacts.size()) break;

		std::cout << "Index out of range. Please enter a valid index number:\n";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	for (size_t i = 0; i < contacts.size(); i++)
	{
		if (contacts[i].id == index) {
			contacts.erase(contacts.begin() + i);
			break;
		}
	}

}


void return_main() {
	// Wait for user to press enter
	std::string str;
	std::getline(std::cin, str);
}


void test_data(std::vector<Contact>& contacts) {
	Contact personOne(1, "John Doe", "123-456-7890", "john.doe@example.com");
	Contact personTwo(2, "Jane Smith", "987-654-3210", "jane.smith@example.com");
	Contact personThree(3, "Alice Johnson", "555-123-4567", "alice.johnson@example.com");

	contacts.push_back(personOne);
	contacts.push_back(personTwo);
	contacts.push_back(personThree);
}