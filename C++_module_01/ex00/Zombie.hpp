#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>

class				Zombie
{
	private:
		std::string	name;
		Zombie(){}
	public:
		void announce(void);
		Zombie(std::string str);
		~Zombie();
};

#endif