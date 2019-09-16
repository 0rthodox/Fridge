#pragma once

#include <iostream>
#include <utility>

template <typename Data>
struct Token {
	Token<Data>(const Data& new_data);
	Data _data;
};

template <typename Data>
std::ostream& operator << (std::ostream& ostr, const Token<Data>& t);

template <typename Data>
std::istream& operator >> (std::istream& istr, Token<Data>& t);