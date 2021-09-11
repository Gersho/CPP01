/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:47:35 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/11 17:52:10 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef _HUMANB_HPP_
#define _HUMANB_HPP_

#include "Weapon.hpp"

class HumanB
{
	public:

	HumanB(std::string name);
	~HumanB();
	void	attack() const;
	void	setWeapon(Weapon weap);

	private:
	
	std::string _name;
	Weapon*		_weap;
};



#endif