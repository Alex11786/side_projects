#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{
		}
		MutantStack(MutantStack const & other)
		{
			*this = other;
		}
		~MutantStack()
		{
		}

		MutantStack& operator=(MutantStack& other)
		{
			(void)other;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		typename std::stack<T>::container_type::iterator begin()
		{
			return(this->c.begin());
		}

		typename std::stack<T>::container_type::iterator end()
		{
			return(this->c.end());
		}
};



#endif