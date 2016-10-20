#pragma once
#include "RCDate.h"
#include <string>
#include <iostream>
#include <sstream>
#include <ctime>

static int m_FakeTodayValue = 0;
static int dayPreMonth[] = { 0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
static int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

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

void RCDate::SetActualToday()
{
	time_t t = time(0);
	struct tm * now = localtime(&t);
	int year, month, day;

	year = now->tm_year + 1900;
	month = now->tm_mon + 1;
	day = now->tm_mday;

	m_date = year * 10000 + month * 100 + day;
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