/*
 * 文件描述：
 *		   定义二叉树的节点类型，声明相关操作。
 * 姓名:
 *		   钟保明
 * 学号:
 *		   18070100017
 * 日期:
 *		   2020/03/19
 *
 */

#ifndef _COMPAIRE_
#define _COMPAIRE_

#include <string>
namespace Btree
{
    struct Node
    {
        std::string word;
        int count = 0;//cout自动初始化为0，
        struct Node *lchild = 0;//左右孩子在自动初始化为0，
        struct Node *rchild = 0;
    };

    typedef Node *PNode;
    //将str插入到二叉树中
    void insert(PNode &p, std::string str);
    //先序遍历
    void preOrder(const PNode &p, unsigned int indent);
    //中序遍历
    void midOrder(const PNode &p);
    //删除树
    void delete_tree(PNode &p);
} // namespace Btree
#endif