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
#include "Phonebook.class.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::start() const
{
    std::cout << "Welcome to your A̶w̶f̶u̶l̶  Awesome Phonebook" << std::endl;
    std::cout << "Enter:" << std::endl;
    std::cout << "      ADD : to add a new contact" << std::endl;
    std::cout << "      SEARCH : to search for a contact" << std::endl;
    std::cout << "      EXIT : to exit the Phone book" << std::endl;
}

void    PhoneBook::addcontact(void) 
{
    static int  i;
    
    this->_contacts[i].init(i);
    if(i >= 8)
        i = 0;
    i++;
}

void PhoneBook::display(void)
{
    std::cout << "------ CONTACTS ------" << std::endl;
    for(int i = 0; i < 8, i++)
        this->_contacts[i].print()
}
