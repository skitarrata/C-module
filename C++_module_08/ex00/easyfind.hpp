#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template<typename T>
int		easyfind(T rand, int n)
{
	typename T::iteretor arr = std::find(rand.begin(), rand.end(), n);
	if (arr == rand.end())
		return -1;
	return *arr;
}

#endif