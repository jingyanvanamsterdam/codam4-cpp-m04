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
		Brain(const std::string* ideas);
		Brain(const Brain& obj);
		Brain& operator=(const Brain& obj);
		~Brain(void);

		const std::string& getIdea(size_t i) const;
		void setIdea(size_t i, const std::string& idea);
		const std::string* getIdeasPt(size_t i) const;

	private:
		std::string _ideas[100];
};

#endif