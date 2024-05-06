/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:10:50 by fboivin           #+#    #+#             */
/*   Updated: 2024/04/18 21:10:50 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    private:

    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phone;
    std::string _secret;
    int         _index;
    std::string _Getinput(void);
    std::string _format(std::string str) const;

    public:

    Contact(void);
    ~Contact(void);
    
    void init(int i);
    void print(void) const;
    void display(void) const;
};

#endif // CONTACT_CLASS_HPP