/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:52:12 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/11 14:23:03 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

#include <iostream>

class Zombie
{
	public:

	Zombie(void);
	~Zombie(void);
	void	announce(void) const;
	void	set_name(std::string name);
	static Zombie* zombieHorde( int N, std::string name );

	private:

	std::string	_name;
};

#endif