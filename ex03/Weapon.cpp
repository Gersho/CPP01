/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:18:32 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/11 16:54:17 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


	Weapon::Weapon(std::string type)
	{
		_type = type;
		return;
	}

	Weapon::~Weapon()
	{
		return;
	}

	const std::string&	Weapon::getType() const
	{
		return (_type);
	}

	void	Weapon::setType(std::string type)
	{
		_type = type;
	}
