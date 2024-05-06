/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:45:49 by fboivin           #+#    #+#             */
/*   Updated: 2024/04/18 20:45:49 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

int main()
{
    PhoneBook book;
    std::string input = "";

    book.start();
    while(input.compare("EXIT"))
    {
        if(!input.compare("ADD"))
            book.addcontact();
        else if(!input.compare("SEARCH"))
        {
            book.display();
            book.search();
        }
        std::cout << ">" << std::flush;
        std::cin >> input;
    }
}