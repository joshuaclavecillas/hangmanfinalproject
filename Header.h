#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string> 
#include <ctime>
#include <vector>
#include <algorithm>
#include <cctype>

string library(string& codeword, string characters)
{
	int m;
	vector<string> lib;
	if (characters == "place") {
		lib.push_back("spain");
		lib.push_back("england");
		lib.push_back("italy");
		lib.push_back("japan");
		lib.push_back("germany");
		lib.push_back("australia");
		lib.push_back("mexico");
	}
	else if (characters == "resturant") {
		lib.push_back("el pollo loco");
		lib.push_back("in n out");
		lib.push_back("kfc");
		lib.push_back("carls jr");
		lib.push_back("mcdonalds");
		lib.push_back("chipotle");
		lib.push_back("waba grill");
		lib.push_back("taco bell");
	}
	else if (characters == "astronomy") {
		lib.push_back("universe");
		lib.push_back("black hole");
		lib.push_back("super nova");
		lib.push_back("milky way");
		lib.push_back("planet");
		lib.push_back("moon");
		lib.push_back("solar system");
		lib.push_back("star");
	}
	else if (characters == "game") {
		lib.push_back("apex legend");
		lib.push_back("diablo 4");
		lib.push_back("fortnite");
		lib.push_back("fifa");
		lib.push_back("age of empire");
		lib.push_back("overwatch");
		lib.push_back("valorant");
		lib.push_back("halo");
	}
	else if (characters == "sport") {
		lib.push_back("soccer");
		lib.push_back("baseball");
		lib.push_back("football");
		lib.push_back("rugby");
		lib.push_back("nascar");
		lib.push_back("hockey");
		lib.push_back("dodgeball");
		lib.push_back("water polo");
	}
	else if (characters == "school") {
		lib.push_back("pencils");
		lib.push_back("paper");
		lib.push_back("notebook");
		lib.push_back("highlighter");
		lib.push_back("pen");
		lib.push_back("crayons");
		lib.push_back("scissors");
		lib.push_back("marker");
	}
	else if (characters == "celebrity") {
		lib.push_back("adam sandler");
		lib.push_back("will smith");
		lib.push_back("taylor swift");
		lib.push_back("lady gaga");
		lib.push_back("beyonce");
		lib.push_back("tom cruise");
		lib.push_back("ryan renolds");
		lib.push_back("robert downey jr");
	}
	else if (characters == "major") {
		lib.push_back("computer science");
		lib.push_back("mathematics");
		lib.push_back("mechanical engineer");
		lib.push_back("english");
		lib.push_back("psychology");
		lib.push_back("nursing");
		lib.push_back("political science");
		lib.push_back("buisness");
	}
	else if (characters == "job") {
		lib.push_back("plumber");
		lib.push_back("carpenter");
		lib.push_back("electrician");
		lib.push_back("teacher");
		lib.push_back("cashier");
		lib.push_back("firefighter");
		lib.push_back("doctor");
		lib.push_back("lawyer");
	}
	else {
		lib.push_back("house");
		lib.push_back("rap");
		lib.push_back("rock");
		lib.push_back("country");
		lib.push_back("blues");
		lib.push_back("jazz");
		lib.push_back("classic");
	}
	srand(time(0));
	m = rand() % 7;
	codeword = lib[m];
	return codeword;
}