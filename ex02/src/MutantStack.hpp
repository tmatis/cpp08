#ifndef MUTANTSTACK_HPP

# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(const MutantStack &src)
		{
			*this = src;
		}
		MutantStack(void) : std::stack<T>() {};
		~MutantStack() {};

		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack	&operator=(const MutantStack &right)
		{
			this->std::stack<T>::operator=(right);
		}
		iterator begin(void)
		{
			return (this->c.begin());
		}
		iterator end(void)
		{
			return (this->c.end());
		}
};

#endif // [MUTANTSTACK_HPP]
