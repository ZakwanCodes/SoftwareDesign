
//#define _CRT_SECURE_NO_DEPRECATE   // Just to make warning/error go away.
//#define _CRT_SECURE_NO_WARNINGS	 // Another way to make warning/error go away.

#include <iostream>
#include "main.h"

using namespace std;

// Adds a specified number of seconds onto the time.
void VTime::addSeconds(int a_seconds)
{
	m_seconds += a_seconds;
	if (m_seconds < 60) return;

	m_minutes += m_seconds / 60;
	m_seconds %= 60;

	if (m_minutes < 60) return;

	m_hours += m_minutes / 60;
	m_minutes %= 60;

	m_hours %= 24;
}
VTime VTime::operator +(int a_seconds)
{
	VTime tmp(m_hours, m_minutes, m_seconds);
	tmp.addSeconds(a_seconds);
	return tmp;
}
// Gets the time as an ASCII string
string VTime::getASCIITime()
{
	//char buff[128];

	// We will get a special error on this.  I wanted to discuss the error and therefore left this code in.
	//sprintf_s(buff, "%2.2d:%2.2d:%2.2d", m_hours, m_minutes, m_seconds);

	// An alternative - note that this will fail unless you use a newer version of C++.
	return format("{0:02}:{1:02}:{2:02}", m_hours, m_minutes, m_seconds);

	//return buff;

	// (This is a test) An alternative - note that this will fail unless you use a newer version of C++.
	// cout << format("{0:02}:{1:02}:{2:02}", 1, 2, 33) << endl;
}