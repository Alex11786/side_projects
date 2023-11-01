#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <vector>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T& cont, int findInt)
{
	typename T::iterator	found;
	
	found = find(cont.begin(), cont.end(), findInt);

	if (found == cont.end())
		throw std::exception();
	return found;	
}

#endif