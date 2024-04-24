#pragma once
#include <string>
#include <list>
#include <sstream>
using namespace std;
class Increments {
private:
	list<string> data;
public:
	void dataArray();
	void inc();
	Increments(list<string>);
};