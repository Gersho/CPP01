/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:36:45 by kzennoun          #+#    #+#             */
/*   Updated: 2021/11/22 17:24:57 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon weap)
{
	_weap = &weap;
	_name = name;
	return;
}

HumanA::~HumanA()
{
	return;
}

void HumanA::attack() const
{
	std::cout << _name << " attacks with his " << _weap->getType() << std::endl;
}



