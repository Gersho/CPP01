/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:19:58 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/15 18:32:04 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef		_KAREN_HPP_
# define	_KAREN_HPP_

#include <iostream>

enum	e_level 
{
	OTHER,
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class	Karen
{
	public:
	void complain(std::string level) const;

	private:

	void debug(void) const;
	void info(void) const;
	void warning(void) const;
	void error(void) const;
};

#endif