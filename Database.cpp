#include "Database.h"

template <typename Data>
Database<Data>::Database<Data>(const std::string& filename) : _filename(filename) {}

template <typename Data>
void Database<Data>::packToken(const Data& d) {
	_tokens.push({ d });
}

template <typename Data>
Data Database<Data>::unpackToken() {
	if (!_tokens.empty()) {
		return _tokens.top()._data;
		_tokens.pop();
	}
	else
		return Data();
}
