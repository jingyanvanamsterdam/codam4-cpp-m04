/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:45:14 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:45:15 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& obj);
		Ice& operator=(const Ice& obj);
		~Ice(void);
		
		AMateria* clone(void) const override;
		void use(ICharacter& target) override;
};

#endif