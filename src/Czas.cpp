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
std::string czas(std::to_string(godzina) + ":" + std::to_string(minuta) + ":" + std::to_string(sekunda);
return czas
}
auto main