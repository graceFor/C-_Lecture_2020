#include "girl.h"
#include "boy.h"
#include <iostream>
using namespace std;

string Girl::get_gname() { return m_gname; }
void Girl::hello()
{
    cout << "나는 " << m_gname << "입니다. \n";
    cout << "내 남자 친구는 " << m_boyfriend->get_bname()
         << "입니다. \n";
}
void Girl::SetBF(Boy *ds) { m_boyfriend = ds; }