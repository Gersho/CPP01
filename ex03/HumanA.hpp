/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:34:58 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/13 12:35:39 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
#define _HUMANA_HPP_

#include "Weapon.hpp"

class HumanA
{
	public:

	HumanA(std::string name, Weapon weap);
	~HumanA();
	void attack() const;

	private:
	
	std::string _name;
	Weapon*		_weap;
};



#endif