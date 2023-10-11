#include "BTree.h"

BTree::BTree() {
    root = nullptr;
}

BTree::~BTree() {
    destroy_tree();
}

typename BTree::node* BTree::BTree_root() {
    return root;
}

void BTree::destroy_tree(node* leaf) {
    if (leaf != nullptr) {
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }
}

void BTree::insert(int key, node* leaf) {
    if (key < leaf->key_value) {
        if (leaf->left != nullptr) {
            insert(key, leaf->left);
        } else {
            leaf->left = new node;
            leaf->left->key_value = key;
            leaf->left->left = nullptr;
            leaf->left->right = nullptr;
        }
    } else if (key >= leaf->key_value) {
        if (leaf->right != nullptr) {
            insert(key, leaf->right);
        } else {
            leaf->right = new node;
            leaf->right->key_value = key;
            leaf->right->left = nullptr;
            leaf->right->right = nullptr;
        }
    }
}

typename BTree::node* BTree::search(int key, node* leaf) {
    if (leaf != nullptr) {
        if (key == leaf->key_value) {
            return leaf;
        } else if (key < leaf->key_value) {
            return search(key, leaf->left);
        } else {
            return search(key, leaf->right);
        }
    } else {
        return nullptr;
    }
}

void BTree::insert(int key) {
    if (root != nullptr) {
        insert(key, root);
    } else {
        root = new node;
        root->key_value = key;
        root->left = nullptr;
        root->right = nullptr;
    }
}

typename BTree::node* BTree::search(int key) {
    return search(key, root);
}

void BTree::destroy_tree() {
    destroy_tree(root);
    root = nullptr;
}
