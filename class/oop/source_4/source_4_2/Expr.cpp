/*
 * 文件描述：
 *		   Expr.hpp相关函数的实现
 *
 * 姓名:
 *		   钟保明
 * 学号:
 *		   18070100017
 * 日期:
 *		   2020/04/23
 *
 */

#include "Expr.hpp"

Expr::Expr(const char *str)
{
    Parser parser;
    root = parser.constructTree(str);//构造语法树
}

Expr::~Expr()
{
    this->root->deleteNode(this->root);//销毁语法树
}

double Expr::getValue() const
{
    return root->getValue();//返回表达式的值
}

void Expr::printMid() const//打印中缀表达式
{
    std::string text;
    text = root->getText_mid();
    std::cout << text << std::endl;
}

void Expr::printPre() const//打印前缀表达式
{
    std::string text;
    text = root->getText_pre();
    std::cout << text << std::endl;
}

void Expr::printPost() const//打印后缀表达式
{
    std::string text;
    text = root->getText_post();
    std::cout << text << std::endl;
}
