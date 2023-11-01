#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {
private:
	std::string _index;
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
	void truncateFunction(std::string Parameter);
	std::string FunctionTemplate(std::string string, std::string text);
public:
	void addFunction();
	void searchFunction(int j);
	void setFirstName(std::string firstName);
	void setLastname(std::string lastName);
	void setNickName(std::string nickName);
	void setPhoneNumber(std::string phoneNumber);
	void setSecret(std::string darkestSecret);

	std::string	getIndex() const;
	std::string getName() const;
	std::string getLast() const;
	std::string getNick() const;
	std::string getPhone() const;
	std::string getDarkestSecret() const;
};

#endif