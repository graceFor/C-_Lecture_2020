#include "girl.h"
#include "boy.h"
#include <iostream>
using namespace std;

string Boy::get_bname() { return m_bname; }
void Boy::hello()
{
    cout << "나는 " << m_bname << "입니다. \n";
    cout << "내 여자 친구는 " << m_girlfriend->get_gname()
         << "입니다. \n";
}
void Boy::SetGF(Girl *ds) { m_girlfriend = ds; }