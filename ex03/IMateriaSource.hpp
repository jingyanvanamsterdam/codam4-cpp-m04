/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:45:43 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:45:44 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"

# define GREEN	"\033[32m"
# define RED	"\033[31m"
# define RESET	"\033[0m"


class IMateriaSource
{
	public:	
		virtual ~IMateriaSource(void) = 0;
		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(const std::string& type) = 0;

	private:
};

#endif