#ifndef PART_OF_H
#define PART_OF_H
#include <string>
#include <math.h>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
using namespace std;

class part_of
{
    public:
        part_of();
        virtual ~part_of();
        part_of(const part_of& other);
        part_of& operator=(const part_of& other);
        long double rtv;
        string rvt;
        long double qrt;
        int all_length;
        int dot_pos;
        long double get_the_part(long double nbm,int till,int prc);

    protected:

    private:
};

#endif // PART_OF_H
