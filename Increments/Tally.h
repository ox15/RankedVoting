#pragma once
#include <string>
#include <list>
#include <sstream>
#include <iostream>
#include <iomanip>
using namespace std;
struct vote {
	int county;
	int a, b, c, d, e;
	vote* nextVote;
};
class Tally {
private:
	vote *first, * last;
	int count;
	
public:
	Tally() {
		count = 0;
		first = NULL;
		last = NULL;
	}
	void addVote(int vcounty, int va, int vb, int vc, int vd, int ve) {
		vote* newNode;
		newNode = new vote;
		newNode->county = vcounty;
		newNode->a = va;
		newNode->b = vb;
		newNode->c = vc;
		newNode->d = vd;
		newNode->e = ve;
		newNode->nextVote = NULL;
		if (first == NULL) {
			first = newNode;
			last = newNode;
		}
		else {
			last->nextVote = newNode;
			last = newNode;
		}

	}
	void outputVotes() {
		int aTally = 0;
		int bTally = 0;
		int cTally = 0;
		int dTally = 0;
		int eTally = 0;
		vote* current;
		current = first;
		while (current != NULL) {
			if (current->a == 1)
				aTally++;
			else if (current->b == 1)
				bTally++;
			else if (current->c == 1)
				cTally++;
			else if (current->d == 1)
				dTally++;
			else if (current->e == 1)
				eTally++;
			current = current->nextVote;
			count++;
		}
		cout << endl;
		cout << "Totals" << setw(3) << aTally << " " << setw(3) << bTally << " " << setw(3) << cTally << " " << setw(3) << dTally << " " << setw(3) << eTally;
		cout << endl;
		cout << "Candidate A  " << (static_cast<double>(aTally) / count) * 100 << "%" << endl;
		cout << "Candidate B  " << (static_cast<double>(bTally) / count) * 100 << "%" << endl;
		cout << "Candidate C  " << (static_cast<double>(cTally) / count) * 100 << "%" << endl;
		cout << "Candidate D  " << (static_cast<double>(dTally) / count) * 100 << "%" << endl;
		cout << "Candidate E  " << (static_cast<double>(eTally) / count) * 100 << "%" << endl;


	}
};