#pragma once
#include "RCDate.h"
#include <string>
#include <iostream>
#include <sstream>
#include <ctime>

int RCDate::m_FakeTodayValue = 0;
int RCDate::dayPreMonth[] = { 0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
int RCDate::daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

void RCDate::Set(int a_year, int a_month, int a_day)
{
	m_date = a_year * 10000 + a_month * 100 + a_day;
}

void RCDate::Set(int a_date)
{
	m_date = a_date;
}

void RCDate::Set(const RCDate &a_date)
{
	m_date = a_date.m_date;
}

int RCDate::GetRealToday()
{
	time_t t = time(0);
	struct tm *now = localtime(&t);
	int year, month, day, date;

	year = now->tm_year + 1900;
	month = now->tm_mon + 1;
	day = now->tm_mday;
	date = year * 10000 + month * 100 + day;
	return date;
}

void RCDate::SetToday()
{
	if (m_FakeTodayValue != 0)
		m_date = m_FakeTodayValue;
	else
		m_date = GetRealToday();
}

void RCDate::SetActualToday()
{
	m_date = GetRealToday();
}


string RCDate::GetASCIIDate()
{
	string temp;
	int year, month, day;
	std::stringstream s;

	year = GetYear();
	month = GetMonth();
	day = GetDay();

	s << month << "/" << day << "/" << year;
	string str = s.str();
	return str;
	
}

// Assignment Operator
RCDate& RCDate::operator= (const RCDate &a_date)
{
	RCDate temp;
	temp.m_date = a_date.m_date;
	return temp;
}

RCDate& RCDate::operator= (int a_date)
{
	RCDate temp;
	temp.m_date = a_date;
	return temp;
}

// Finds difference between two dates
int RCDate::operator -(const RCDate &a_date)
{
	// TODO: difference between dates
	return 0;
}

// Subtracts specified number of days from date
int RCDate::operator -(int a_days)
{
	// TODO: subtract specified days
	return 0;
}

// Adds days to date
int RCDate::operator+(int a_days)
{
	// TODO: add days to date
	return 0;
}

// Comparison Operators
bool RCDate::operator ==(const RCDate &a_date) const
{
	if (this->m_date == a_date.m_date)
		return true;
	else
		return false;
}

bool RCDate::operator ==(int a_date) const
{
	if (this->m_date == a_date)
		return true;
	else
		return false;
}

bool RCDate::operator !=(const RCDate &a_date) const
{
	if (this->m_date == a_date.m_date)
		return false;
	else
		return true;
}

bool RCDate::operator !=(int a_date) const
{
	if (this->m_date == a_date)
		return false;
	else
		return true;
}

bool RCDate::operator <(const RCDate &a_date) const
{
	if (this->m_date < a_date.m_date)
		return true;
	else
		return false;
}

bool RCDate::operator <(int a_date)const
{
	if (this->m_date < a_date)
		return true;
	else
		return false;
}

bool RCDate::operator <= (const RCDate & a_date)
{
	if (this->m_date <= a_date.m_date)
		return true;
	else
		return false;

}

bool RCDate::operator <= (int a_date)
{
	if (this->m_date <= a_date)
		return true;
	else
		return false;
}

bool RCDate::operator > (const RCDate & a_date)
{
	if (this->m_date > a_date.m_date)
		return true;
	else
		return false;
}

bool RCDate::operator > (int a_date)
{
	if (this->m_date > a_date)
		return true;
	else
		return false;
}

bool RCDate::operator >= (const RCDate &a_date)
{
	// TODO RCDate >=
	return false;
}

bool RCDate::operator >=(int a_date) const
{
	// TODO int >=
	return false;
}

RCDate& RCDate::operator--()
{
	// TODO prefix --
	RCDate tmp = *this;
	return tmp;
}

RCDate& RCDate::operator++()
{
	// TODO prefix ++
	RCDate tmp = *this;
	return tmp;
}