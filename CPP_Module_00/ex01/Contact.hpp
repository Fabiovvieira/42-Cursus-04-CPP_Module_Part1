#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {

public:
	Contact (void);
	~Contact (void);
	void	fillContact(void);
	std::string	getfname(void);
	std::string	getlname(void);
	std::string	getnickname(void);
	std::string	getphone(void);
	std::string	getsecret(void);
	void	getfullContact(void);

private:
	std::string	_fname;
	std::string	_lname;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;
	std::string	_getFromUser(std::string field);

};

#endif