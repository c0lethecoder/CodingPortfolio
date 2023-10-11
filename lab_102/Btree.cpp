#include "BTree.h"
#include <iostream>

using namespace std;

// Default constructor
BTree::BTree() {
    root = NULL;
}

// Destructor
BTree::~BTree() {
    destroy_tree(root);
}

// Returns a pointer to the root of the Binary Tree
Node* BTree::BTree_root() {
    return root;
}

// Helper function to destroy a subtree
void BTree::destroy_tree(Node *leaf) {
    if (leaf != NULL) {
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }
}

// Recursive function to insert a key into the Binary Tree
void BTree::insert(int key, Node *leaf) {
    if (key < leaf->key_value) {
        if (leaf->left != NULL) {
            insert(key, leaf->left);
        }
        else {
            leaf->left = new Node;
            leaf->left->key_value = key;
            leaf->left->left = NULL;
            leaf->left->right = NULL;
        }
    }
    else if (key >= leaf->key_value) {
        if (leaf->right != NULL) {
            insert(key, leaf->right);
        }
        else {
            leaf->right = new Node;
            leaf->right->key_value = key;
            leaf->right->left = NULL;
            leaf->right->right = NULL;
        }
    }
}

// Recursive function to search for a key in the Binary Tree
Node* BTree::search(int key, Node *leaf) {
    if (leaf != NULL) {
        if (key == leaf->key_value) {
            return leaf;
        }
        if (key < leaf->key_value) {
            return search(key, leaf->left);
        }
        else {
            return search(key, leaf->right);
        }
    }
    else {
        return NULL;
    }
}

// Public function to insert a key into the Binary Tree
void BTree::insert(int key) {
    if (root != NULL) {
        insert(key, root);
    }
    else {
        root = new Node;
        root->key_value = key;
        root->left = NULL;
        root->right = NULL;
    }
}

// Public function to search for a key in the Binary Tree
Node* BTree::search(int key) {
    return search(key, root);
}

// Public function to destroy the entire Binary Tree
void BTree::destroy_tree() {
    destroy_tree(root);
    root = NULL;
}
