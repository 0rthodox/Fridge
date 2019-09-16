#pragma once

#include "Product.h"

#include <map>

class Fridge {
private:
	std::map<Date, Product> _products_by_add, _products_by_exp;
public:
	void Add(Product& P);
	void GetProducts();
};