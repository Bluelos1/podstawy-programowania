#include "Czas.h"
#include <iomanip>
#include <iostream>
#include <string>

czas::czas (int godz, int min, int sek)
	:godzina{godz}, minuta {min}, sekunda{sek}
	{
		if (sekunda > 59) {
        sekunda = sekunda - 60;
        minuta++;
    } else if (sekunda < 0) {
        sekunda = 60 + sekunda;
        minuta--;
    }

    if (minuta > 59) {
        minuta = minuta - 60;
        godzina++;
    } else if (minuta < 0) {
        minuta = 60 + minuta;
        godzina--;
    }


    if (godzina > 23) {
        godzina = godzina - 24;
    } else if (godzina < 0) {
        godzina = 24 + godzina;
    
}
	}