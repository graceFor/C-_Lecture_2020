// Eight_Queen
#include <iostream>

using namespace std;

class queen
{
public:
    queen(int, queen *); // constructor

    // find and print solution
    bool findSolution();
    bool advance();
    void print();

private:
    int m_row;
    const int m_column;
    queen *m_neighbor;

    //internal method
    bool canAttack(int, int);
};

queen ::queen(int col, queen *ngh) : m_column(col), m_neighbor(ngh)
{
    m_row = 1;
}

void queen::print()
{
    queen *p;
    p = this;
    while (p != 0)
    {
        cout << p->m_column << " " << p->m_row
             << endl;
        p = p->m_neighbor;
    }
}

bool queen::canAttack(int testRow, int testColumn)
{
    // 행이 같은지 보자
    if (m_row == testRow)
        return true;
    // 대각선 테스트
    int columnDifference = testColumn - m_column;
    if ((m_row + columnDifference == testRow) ||
        (m_row - columnDifference == testRow))
        return true;
    // 옆의 퀸에게 물어보자
    return m_neighbor &&
           m_neighbor->canAttack(testRow, testColumn);
}

bool queen::findSolution()
{
    // neighbor 들의 위치와 충돌 여부 확인
    while (m_neighbor &&
           m_neighbor->canAttack(m_row, m_column))
    {
        bool result;
        result = advance();
        if (result == false)
        { // 더 갈 곳이 없음.
            return false;
        }
    }
    // 답을 찾은 경우:
    return true;
}

bool queen::advance() // 이동하고 check하기
{
    if (m_row < 8)
    {
        m_row++;
        return findSolution();
    }
    if (m_neighbor && // 더 이상 갈 곳이 없으므로 neighbor를
        m_neighbor->advance() == false)
    { // 이동시켜 해결책 찾기
        return false;
    }
    m_row = 1;
    return findSolution();
}

int main()
{
    queen *lastQueen = 0;
    for (int i = 1; i <= 8; i++)
    {
        lastQueen = new queen(i, lastQueen);
        if (lastQueen->findSolution() == false)
            cout << "no solution\n";
    }
    lastQueen->print();
}