/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:10:49 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/11 17:48:36 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

#include <string>

class Weapon
{
	public:

	Weapon(std::string type);
	~Weapon();
	const std::string&	getType() const;
	void				setType(std::string type);
	
	private:

	std::string	_type;
};

#endif