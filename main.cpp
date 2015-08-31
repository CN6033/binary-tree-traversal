#include <iostream>
#include <queue>

#include "BinaryTree.h"

using namespace std;

std::shared_ptr<BinaryTree> initBinaryTree();

void binaryTreeTraversal(std::shared_ptr<BinaryTree> root);


int main() {
    auto root = initBinaryTree();
    binaryTreeTraversal(root);
    return 0;
}

void binaryTreeTraversal(std::shared_ptr<BinaryTree> root) {
    queue<shared_ptr<BinaryTree>> q;

    q.push(root);

    while (!q.empty()) {
        auto node = q.front();
        q.pop();

        cout << node->getData() << endl;

        if (node->getLeft() != nullptr) {
            q.push(node->getLeft());
        }

        if (node->getRight() != nullptr) {
            q.push(node->getRight());
        }
    }
}

std::shared_ptr<BinaryTree> initBinaryTree() {
    int data = 0;
    std::shared_ptr<BinaryTree> root(new BinaryTree(data++));

    std::shared_ptr<BinaryTree> node1(new BinaryTree(data++));
    std::shared_ptr<BinaryTree> node2(new BinaryTree(data++));
    std::shared_ptr<BinaryTree> node3(new BinaryTree(data++));
    std::shared_ptr<BinaryTree> node4(new BinaryTree(data++));
    std::shared_ptr<BinaryTree> node5(new BinaryTree(data++));
    std::shared_ptr<BinaryTree> node6(new BinaryTree(data));


    root->setLeft(node1);
    root->setRight(node2);

    node1->setLeft(node3);
    node1->setRight(node4);

    node2->setLeft(node5);

    node3->setRight(node6);

    return root;
}
