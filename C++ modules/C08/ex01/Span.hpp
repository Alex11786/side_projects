#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	public:
		Span();
		Span(unsigned int const n);
		Span(Span const & origin);
		~Span();

		Span& operator=(Span& origin);

		unsigned int	getN() const;
		
		void			addNumber(int num);
		void			fillArray(int n);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		
	private:
		unsigned int const	N;
		std::vector<int>	vect;
		unsigned int		count;
};



#endif