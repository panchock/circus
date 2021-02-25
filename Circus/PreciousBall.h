#pragma once
#include <string>

class PreciousBall {
public:
	// cant be copied
	PreciousBall(const PreciousBall& other) = delete;
	PreciousBall& operator=(const PreciousBall& other) = delete;

	// TODO: implement
	void printColor();
private:
	std::wstring m_color;
};
