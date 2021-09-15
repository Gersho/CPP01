/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:19:55 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/15 17:33:32 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::complain(std::string level) const
{	
	void (Karen::*f)(void) const;
	
	switch (level[0])
	{
		case 'D':
			f = &Karen::debug;
			break;
		case 'I':
			f = &Karen::info;
			break;
		case 'W':
			f = &Karen::warning;
			break;
		case 'E':
			f = &Karen::error;
			break;
	}
	(this->*f)();
}

void Karen::debug(void) const
{
	std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void) const
{
	std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void Karen::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void) const
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
