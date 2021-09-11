/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 14:29:01 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/11 14:37:13 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "display the address in memory of the string: " << &str << std::endl;
	std::cout << "display the address of the string by using stringPTR: " << stringPTR << std::endl;
	std::cout << "display the address of the string by using stringREF: " << &stringREF << std::endl;
	std::cout << "display the string using the pointer: " << *stringPTR << std::endl;
	std::cout << "display the string using the reference: " << stringREF << std::endl;

}