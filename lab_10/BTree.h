 #ifndef BTREE_H
#define BTREE_H

class BTree {
public:
    BTree();
    ~BTree();
    struct node {
        int key_value;
        node* left;
        node* right;
    };
    node* BTree_root();
    void insert(int key);
    node* search(int key);
    void destroy_tree();
private:
    node* root;
    void destroy_tree(node* leaf);
    void insert(int key, node* leaf);
    node* search(int key, node* leaf);
};

#endif
