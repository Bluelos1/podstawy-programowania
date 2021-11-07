#include <iostream>
#include <string>

struct czas
{
	int godzina;
	int minuta;
	int sekunda;
	std::string ToString() const;
	void next_hour()
	void next_minute()
	void next_second()

};
std::string czas::ToString() const
{
std::string czas(godzina + ":" + minuta + ":" + sekunda);
}