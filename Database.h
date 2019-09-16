#pragma once

#include <stack>
#include <fstream>

#include "Token.h"


template <typename Data>
class Database {
public:
	Database<Data>(const std::string& filename = "database.txt");
	void packToken(const Data& d);
	Data unpackToken();
private:
	std::stack<Token<Data>> _tokens;
	std::string _filename;
};