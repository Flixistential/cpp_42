/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:12:28 by fboivin           #+#    #+#             */
/*   Updated: 2024/04/18 21:12:28 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.class.hpp"

class PhoneBook
{
    private:

    Contact _contacts[8];
    int _getIndex(void) const;

    public:

    PhoneBook(void);
    ~PhoneBook(void);
    void    start(void) const;
    void    addcontact(void);
    void    display(void) const;
    void    search(void) const;

};

#endif //PHONEBOOK_HPP