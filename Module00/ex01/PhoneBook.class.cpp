/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:12:16 by fboivin           #+#    #+#             */
/*   Updated: 2024/04/18 21:12:16 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::start() const
{
    std::cout << "Welcome to your A̶w̶f̶u̶l̶ Awesome Phonebook" << std::endl;
    std::cout << "Enter:" << std::endl;
    std::cout << "      ADD : to add a new contact" << std::endl;
    std::cout << "      SEARCH : to search for a contact" << std::endl;
    std::cout << "      EXIT : to exit the Phone book" << std::endl;
}

void    PhoneBook::addcontact(void) 
{
    static int  i;
    
    if(i >= 8)
        i = 0;
    this->_contacts[i].init(i);
    i++;
}

void PhoneBook::display(void) const
{
    std::cout << "---------------- CONTACTS ----------------" << std::endl;
    std::cout << "|" << std::setw(10) << "INDEX" << std::flush;
    std::cout << "|" << std::setw(10) << "FIRSTNAME" << std::flush;
    std::cout << "|" << std::setw(10) << "LASTNAME" << std::flush;
    std::cout << "|" << std::setw(10) << "NICKNAME" << std::flush;
	std::cout << "|" << std::endl;
    for(int i = 0; i < 8; i++)
        this->_contacts[i].print();
    std::cout << std::endl;
}

int PhoneBook::_getIndex() const
{
    int index = -1;
    bool valid = false;

    std::cout << "Enter a Contact index : " << std::flush;
    while(!valid)
    {
        std::cin >> index;
        if(std::cin.good() && index > 0 && index <= 8)
            valid = true;
        else 
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number from 1 to 8" << std::endl;
        }
    }
    return (index);
}

void PhoneBook::search(void) const
{
    int i = _getIndex();
    this->_contacts[i - 1].display();
}