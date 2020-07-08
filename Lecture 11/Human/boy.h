// boy.h

#ifndef __BOY_H
#define __BOY_H
#include <string>
#include <iostream>
using namespace std;

class Girl;

class Boy
{
public:
    string m_bname;
    Girl *m_girlfriend;
    Boy(string bname) : m_bname(bname), m_girlfriend(0) {}
    string get_bname();
    void hello();
    void SetGF(Girl *ds);
};

#endif