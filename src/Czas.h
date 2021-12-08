#include <iostream>
#include <string>

struct czas
{
	int godzina;
	int minuta;
	int sekunda;
	std::string ToString() const;
	void next_hour();
	void next_minute();
	void next_second();



enum class Time_of_day
{
	Rano,
	dzien,
	wieczor,
	noc
};
auto time_of_day() const -> Time_of_day;
auto to_string(Time_of_day) -> std::string;

auto operator+(czas const&) const -> czas;
    auto operator-(czas const&) const -> czas;
    auto operator<(czas const&) const -> bool;
    auto operator>(czas const&) const -> bool;
    auto operator==(czas const&) const -> bool;
    auto operator!=(czas const&) const -> bool;

    auto count_seconds() const -> uint64_t;
    auto count_minutes() const -> uint64_t;
    auto time_to_midnight() const -> czas;


    czas(int godzina, int minuta, int sekunda);
};