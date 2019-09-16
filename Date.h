#pragma once

#include <cstdint>
#include <iostream>
#include <iomanip>
#include <tuple>


struct Year {
	uint32_t _val;
	explicit Year(const uint32_t& new_val);
};

struct Month {
	uint32_t _val;
	explicit Month(const uint32_t& new_val);
};

struct Day {
	uint32_t _val;
	explicit Day(const uint32_t& new_val);
};

class Date {
public:
	uint32_t getYear() const;
	uint32_t getMonth() const;
	uint32_t getDay() const;
	Date(const uint32_t& new_year,
		const uint32_t& new_month,
		const uint32_t& new_day);
private:
	Year _year;
	Month _month;
	Day _day;
};

std::ostream& operator << (std::ostream& ostr, const Date& d);
std::istream& operator >> (std::istream& istr, Date& d);

const bool operator < (const Date& lhs, const Date& rhs);

Date operator - (const Date& lhs, const Date& rhs);