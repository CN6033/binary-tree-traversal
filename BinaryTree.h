#ifndef BINARYTREETRAVERSAL_BINARYTREE_H
#define BINARYTREETRAVERSAL_BINARYTREE_H

#include <memory>

using namespace std;

class BinaryTree {
private:
    int data;
    shared_ptr<BinaryTree> left;
    shared_ptr<BinaryTree> right;
public:
    BinaryTree(int data);

    shared_ptr<BinaryTree> getLeft();

    void setLeft(shared_ptr<BinaryTree>);

    shared_ptr<BinaryTree> getRight();

    void setRight(shared_ptr<BinaryTree>);

    int getData();
};

#endif //BINARYTREETRAVERSAL_BINARYTREE_H
