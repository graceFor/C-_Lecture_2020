// girl.h

#ifndef __GIRL_H
#define __GIRL_H
#include <string>
#include <iostream>
using namespace std;

class Boy;

class Girl
{
public:
    string m_gname;
    Boy *m_boyfriend;
    Girl(string gname) : m_gname(gname), m_boyfriend(0) {}
    string get_gname();
    void hello();
    void SetBF(Boy *ds);
};

#endif