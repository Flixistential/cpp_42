/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:19:31 by fboivin           #+#    #+#             */
/*   Updated: 2024/04/18 16:19:31 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        for(int i = 1; argv[i]; i++)
            for(int j = 0; argv[i][j]; j++)
                std::cout << (char)toupper(argv[i][j]);
    std::cout << std::endl;
}