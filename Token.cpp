#include "Token.h"

template <typename Data>
Token<Data>::Token<Data>(const Data& new_data) : _data(new_data) {}

template <typename Data>
std::ostream& operator << (std::ostream& ostr, const Token<Data>& t) {
	return ostr << t._data;
}

template <typename Data>
std::istream& operator >> (std::istream& istr, const Token<Data>& t) {
	istr >> t._data;
	return istr;
}
