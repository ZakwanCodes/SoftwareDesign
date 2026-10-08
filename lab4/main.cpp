
//#define _CRT_SECURE_NO_DEPRECATE   // Just to make warning/error go away.
#define _CRT_SECURE_NO_WARNINGS	 // Another way to make warning/error go away.
#include <iostream>
#include <ctime>
#include "main.h"



using namespace std;

// Adds a specified number of seconds onto the time.
void VTime::addSeconds(int a_seconds)
{
	m_seconds += a_seconds;

	// Keep the time within a 24-hour day.
	m_seconds %= (24 * 60 * 60);
}

// Plus operator to add seconds onto the time.
VTime VTime::operator +(int a_seconds)
{
	VTime tmp;

	tmp.m_seconds = m_seconds + a_seconds;

	// Keep the time within a 24-hour day.
	tmp.m_seconds %= (24 * 60 * 60);

	return tmp;
}

// Minus operator to find the difference between two VTimes.
int VTime::operator -(VTime a_time)
{
	return m_seconds - a_time.m_seconds;
}

// Set the time to the current time.
void VTime::setToNow()
{
	time_t now = time(0);
	tm* localTime = localtime(&now);

	m_seconds = localTime->tm_hour * 3600
		+ localTime->tm_min * 60
		+ localTime->tm_sec;
}

// Gets the time as an ASCII string.
string VTime::getASCIITime()
{
	return format("{0:02}:{1:02}:{2:02}",
		getHours(),
		getMinutes(),
		getSeconds());
}



