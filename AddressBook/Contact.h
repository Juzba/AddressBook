#pragma once
#include <string>


class Contact
{

public:
	int id;
	std::string name;
	std::string phone;
	std::string email;

	Contact(int id, std::string name, std::string phone, std::string email)
		: id(id), name(name), phone(phone), email(email)
	{
	}

};

