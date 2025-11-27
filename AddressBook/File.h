#pragma once
#include <fstream>
#include <sstream>

std::string open_contacts(std::vector<Contact>& contacts) {

	std::ifstream ifs("Contacts.txt");

	if (ifs.fail()) { ifs.close(); return "Failed to open file"; }


	std::string line, status = "OK";

	while (std::getline(ifs, line)) {
		std::stringstream ss(line);
		std::string idStr, name, phone, email;

		std::getline(ss, idStr, ',');
		std::getline(ss, name, ',');
		std::getline(ss, phone, ',');
		std::getline(ss, email, '\n');

		try {
			Contact contact(std::stoi(idStr), name, phone, email);
			contacts.push_back(contact);
		}
		catch (...) {
			status = "Error parsing contact: " + line;
			continue;
		}

	}

	ifs.close();
	return status;
}


void save_contacts(const std::vector<Contact>& contacts) {

	std::ofstream ofs("Contacts.txt");

	for (const auto& c : contacts) {
		ofs << c.id << ',' << c.name << ',' << c.phone << ',' << c.email << std::endl;
	}

	ofs.close();
}


////