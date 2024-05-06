/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:13:31 by fboivin           #+#    #+#             */
/*   Updated: 2024/04/18 21:13:31 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::_Getinput(void)
{
	std::string input = "";
    bool valid = false;

	while(!valid)
	{
		std::getline(std::cin, input);
		if(std::cin.good() && !input.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Wrong input try again" << std::endl;
			std::cout << ">";
		}
	}
	return (input);
}

std::string Contact::_format(std::string str) const
{
	if(str.length() > 10)
		return(str.substr(0, 9) + ".");
	return (str);
}


void	Contact::init(int i)
{
    this->_index = i + 1;
    std::cout << "enter your first name: ";
    this->_firstname = _Getinput();
    std::cout << "enter your last name: ";
    this->_lastname = _Getinput();
    std::cout << "enter your nickname: ";
    this->_nickname = _Getinput();
    std::cout << "enter your phone number: ";
    this->_phone = _Getinput();
    std::cout << "enter your darkest secret: ";
    this->_secret = _Getinput();
}

void Contact::print(void) const
{
    if(this->_firstname.empty() || this->_lastname.empty())
        return;
     std::cout << "|" << std::setw(10) << this->_index << std::flush;
     std::cout << "|" << std::setw(10) << this->_format(this->_firstname) << std::flush;
     std::cout << "|" << std::setw(10) << this->_format(this->_lastname) << std::flush;
     std::cout << "|" << std::setw(10) << this->_format(this->_nickname) << std::flush;
	 std::cout << "|" << std::endl;
}

void Contact::display(void) const
{
	if(this->_firstname.empty() || this->_lastname.empty())
        return;

    std::cout << "First name : " << this->_firstname << std::endl;
    std::cout << "Last name : " << this->_lastname << std::endl;
    std::cout << "Nickname : " << this->_nickname << std::endl;
    std::cout << "Phone number : " << this->_phone << std::endl;
    std::cout << "Darkest secret : " << this->_secret << std::endl;
}
