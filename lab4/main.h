#pragma once
#include <string>
#include <iostream>
using namespace std;

class VTime
{
public:

	// Constructor for this class.
	VTime(int a_hours = 0, int a_minutes = 0, int a_seconds = 0)
	{
		m_seconds = a_hours * 3600 + a_minutes * 60 + a_seconds;
	}

	// Accessor functions.
	int getHours()
	{
		return m_seconds / 3600;
	}

	int getMinutes()
	{
		return (m_seconds % 3600) / 60;
	}

	int getSeconds()
	{
		return m_seconds % 60;
	}

	void setHours(int a_hours)
	{
		m_seconds = a_hours * 3600 + getMinutes() * 60 + getSeconds();
	}

	void setMinutes(int a_minutes)
	{
		m_seconds = getHours() * 3600 + a_minutes * 60 + getSeconds();
	}

	void setSeconds(int a_seconds)
	{
		m_seconds = getHours() * 3600 + getMinutes() * 60 + a_seconds;
	}

	// A function to add a specified number of seconds to the time.
	void addSeconds(int a_seconds);

	// Plus operator to add seconds onto the time.
	VTime operator +(int a_seconds);

	// Minus operator to find the difference between two VTimes.
	int operator -(VTime a_time);

	// Set the time to the current time.
	void setToNow();

	// Gets the time as an ASCII string.
	string getASCIITime();

private:

	// Number of seconds since midnight.
	int m_seconds;
};

// Overloading output operator.
inline ostream& operator << (ostream& a_out, VTime a_time)
{
	a_out << a_time.getASCIITime();
	return a_out;
}
