#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T& a, T& b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

template <typename T>
T const & max(T const & a, T const & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

template <typename T>
T const & min(T const & a, T const & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

#endif