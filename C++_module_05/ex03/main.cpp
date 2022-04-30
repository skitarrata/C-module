#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main() {


	std::cout << "*------------------- Creating a robotomy request form -------------------*" << std::endl;
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Bureaucrat b("haha", 5);
	rrf->beSigned(b);
	rrf->execute(b);
	std::cout << std::endl;


	std::cout << "*------------------- Creating a shrubbery creation form -------------------*" << std::endl;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Beaaaarish");
	rrf->beSigned(b);
	rrf->execute(b);

	return 0;
}