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



void Contact::init(int i)
{
    this->index = i;
    std::cout << "enter your first name:";
    std::cin >> this->_firstname;
    std::cout << "enter your last name:";
    std::cin >> this->_lastname;
    std::cout << "enter your nickname:";
    std::cin >> this->_nickname;
    std::cout << "enter your phone number:";
    std::cin >> this->_phone;
    std::cout << "enter your darkest secret:";
    std::cin >> this->_secret;
}

void Contact::print(void) const
{
    if(this->_firstname.empty() || this->_lastname.empty())
        return;
}