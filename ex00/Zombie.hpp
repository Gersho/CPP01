/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:52:12 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/11 12:25:31 by kzennoun         ###   ########lyon.fr   */
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
	static Zombie* newZombie(std::string name);
	static void randomChump(std::string name);

	private:

	std::string	_name;


};

#endif