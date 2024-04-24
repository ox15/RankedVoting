// Increments.cpp: implement functions for incrementing
//

#include <iostream>
#include "Increments.h"
using namespace std;

void Increments::dataArray() {
    // data is in the format of "1 2 3 4 5" for 1st-5th choice
    // This function turns each record into an array
    // so the increment function can work with it
    list<string> dataCopy = data;
    while (!dataCopy.empty()) {
        string record = dataCopy.end();
        string recordArray[6];
        int i = 0;
        stringstream ssin(record);

        while (ssin.good() && i < 6) {
            // put part of string into array
            ssin >> recordArray[i];
            ++i;
        }
        for (i = 0; i < 6; i++)
            cout << recordArray[i] << " ";
        cout << endl;
        dataCopy.pop_back();
    }
}

void Increments::inc() {
    // Increment vote count for each candidate
    stack<string> dataCopy = data;

}

Increments::Increments(stack<string> d)
{
    data = d;
}






