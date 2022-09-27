#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	printElement(T const arrElem)
{
	std::cout << arrElem << " ";
}

template<typename T>
void	iter(T* ptr, int len, void (*f)(T elem))
{
	int	i = 0;
	while (i < len)
	{
		(*f)(ptr[i]);
		i++;
	}
}

#endif