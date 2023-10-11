#include "BTree.h"
#include <iostream>

int main() {
    BTree tree;
    tree.insert(5);
    tree.insert(2);
    tree.insert(7);
    tree.insert(1);
    tree.insert(6);
    BTree::node* node1 = tree.search(2);
    BTree::node* node2 = tree.search(3);
    std::cout << "Node 1: " << node1->key_value << std::endl; // Output: Node 1: 2
    std::cout << "Node 2: " << node2 << std::endl; // Output: Node 2: 0x0
    tree.destroy_tree();
    return 0;
}
