#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <stdexcept>

template<typename T>
class Array
{
	private:
		unsigned int _len;
		T *_arr;
	public:
		Array() : _len(0), _arr(NULL) {}
		~Array(){delete(_arr);}
		Array(const unsigned int n) :  _len(n), _arr(new T[n]){}
		Array(const Array &other) : _len(other.size()), _arr(new T[_len])
		{
			for(int i = 0; i < _len; i++)
				_arr[i] = other[i];
		}
		Array& operator=(const Array &other)
		{
			if(this == &other)
				return *this;
			if(this->_arr)
				delete[] _arr;
			_len = other.size();
			_arr = new T[_len];
			for(int i = 0; i < _len; i++)
				_arr[i] = other[i];
		}
		T& operator[](unsigned int const num) const
		{
			if(num >= _len)
				throw std::out_of_range("Out of range");
			return _arr[num];
		}
		unsigned int size() const
		{
			return(_len);
		}
};

#endif