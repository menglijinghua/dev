#ifndef _THIS_IS_ERROR_CPP
#define _THIS_IS_ERROR_CPP
#include "error.hpp"
using namespace std;
ofstream out;
bool initError()
{
    out.open("../error/errorLog.txt");
    if (!out.is_open())
        return false;
    return true;
}

void closeError()
{
    if (out.is_open())
    {
        out.flush();
        out.close();
    }
}

void lexerError(char errorChar, int row, int col)
{
    out << "lexer error: " << errorChar << " (row " << row << " col " << col << ")\n";
}

void parserError1(int row, int col)
{
    out << "parser error: "
        << "errorToken "
        << " (row " << row << " col " << col << ")\n";
}

void parserError2(char lexeme[], int row, int col)
{
    out << "parser error: unmatched token: " << lexeme << " (row " << row << " col " << col << ")\n";
}

void parserError3(const char *msg)
{
    out << msg;
}
#endif