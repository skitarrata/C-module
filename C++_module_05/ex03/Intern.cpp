#include "Intern.hpp"
#include "Form.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &other) { *this = other; }

Intern &Intern::operator=(const Intern &other)
{
	(void) other;
	return *this;
}

Form*					Intern::makeForm(const std::string &formName, const std::string &formTarget)
{
	if (formName.empty())
	{
		std::cout << "Form not found" << std::endl;
		return (NULL);
	}
	std::string funcPool[] = {std::string("shrubbery creation"), std::string("robotomy request"),
							  std::string("presidential pardon")};
	Form* actionsPool[] = {new ShrubberyCreationForm(formTarget), new RobotomyRequestForm(formTarget),
						   new PresidentialPardonForm(formTarget)};
	for (int i = 0; i < 3; ++i)
		if (formName == funcPool[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return actionsPool[i];
		}
	return NULL;
}
