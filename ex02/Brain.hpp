/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:43:41 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:43:42 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

# define GREEN	"\033[32m"
# define RED	"\033[31m"
# define RESET	"\033[0m"


class Brain
{
	public:
		Brain(void);
		Brain(const Brain& obj);
		Brain& operator=(const Brain& obj);
		~Brain(void);

		const std::string& getIdea(size_t i) const;
		void setIdea(size_t i, const std::string& idea);
		const std::string* getIdeasPt() const;

	private:
		std::string _ideas[100];
};

#endif