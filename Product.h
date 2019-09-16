#pragma once

#include "Date.h"

class Product {
public:
	Product(const std::string& new_name,
		const Date& new_date,
		const Date& new_last_date);
	std::string getName();
	Date getInitialDate();
	Date getLastDate();
	size_t getQuantity();

private:
	std::string _name;
	Date _initialDate;
	Date _lastDate;
	size_t _quantity();
};