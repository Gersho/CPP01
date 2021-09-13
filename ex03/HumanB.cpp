/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:49:51 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/13 11:49:59 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weap(NULL)
{
	_name = name;
	return;
}

HumanB::~HumanB()
{
	return;
}

void HumanB::attack() const
{
	std::cout << _name << " attacks with his " << _weap->getType() << std::endl;
}

void HumanB::setWeapon(Weapon weap)
{
	_weap = &weap;
}