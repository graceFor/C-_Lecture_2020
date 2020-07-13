// Eight_Queen

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
