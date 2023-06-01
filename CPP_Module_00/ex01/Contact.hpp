#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {

public:
	Contact (void);
	~Contact (void);
	void	fillContact(void);

private:
	std::string	_fname;
	std::string	_lname;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;

	std::string	_getFromUser(std::string field);

};

#endif