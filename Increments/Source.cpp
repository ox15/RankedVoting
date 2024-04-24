#include "Increments.h"

int main()
{
    stack<string> d;
    d.push("42 1 2 3 4 5");
    d.push("34 5 2 4 1 3");
    d.push("27 2 5 4 1 3");
    d.push("38 1 3 4 2 5");
    // make an instance of Increments with the data
    Increments in(d);
    in.dataArray();
}