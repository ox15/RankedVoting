#include "Tally.h"

int main()
{
    // missing stuff here

    Tally newVote;
    int county, a, b, c, d, e;
    for (int i = 0; i < 10000; i++) {
        county = counties[rand() % 62];
        a = 1 + rand() % 5;
        a = 1 + rand() % 5;
        while (a == b)
            b = 1 + rand() % 5;
        c = 1 + rand() % 5;
        while (c == a || c == b)
            c = 1 + rand() % 5;
        d = 1 + rand() % 5;
        while (d == a || d == b || d == c)
            d = 1 + rand() % 5;
        e = 1 + rand() % 5;
        while (e == a || e == b || e == c || e == d)
            e = 1 + rand() % 5;
    }
}