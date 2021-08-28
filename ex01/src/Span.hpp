#ifndef SPAN_HPP

# define SPAN_HPP

# include <iostream>
# include <vector>
# include <cstdlib>

class Span
{
	private:
		uint					_N;
		std::vector<int>	_array;

	public:
	class NoEnoughtSpace : public std::exception
	{
		public:
			char const *what() const throw();
	};
	class NoEnoughtElement : public std::exception
	{
		public:
			char const *what() const throw();
	};
					Span(uint N);
					Span(const Span &src);
					Span(void);
					~Span();
		void		addNumber(int n);
		void		addNumbers(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		int			longestSpan(void) const;
		int			shortestSpan(void) const;
		Span	&operator=(const Span &right);
};

#endif // [SPAN_HPP]
