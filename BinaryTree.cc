#include "BinaryTree.h"


BinaryTree::BinaryTree(int data) : data(data), left(nullptr), right(nullptr) {

}

shared_ptr<BinaryTree> BinaryTree::getLeft() {
    return left;
}

void BinaryTree::setLeft(shared_ptr<BinaryTree> ptr) {
    left = ptr;
}

shared_ptr<BinaryTree> BinaryTree::getRight() {
    return right;
}

void BinaryTree::setRight(shared_ptr<BinaryTree> ptr) {
    right = ptr;
}

int BinaryTree::getData() {
    return data;
}
