#pragma once

#define MINSTAT 1;
#define STATAVG 10;

int calculateBonus(int stat){

	int bonus = 0;
	int statDiff = stat - STATAVG;
	bool is_negative = statDiff < 0;

	if (!is_negative) {
		bonus = statDiff / 2;
	}
	else {
		statDiff -= 1;
		bonus = statDiff / 2;
	}
	return bonus;
}