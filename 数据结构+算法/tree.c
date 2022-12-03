#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left, *right;
};

void inorder(struct TreeNode *root) {
    if (root) {
        inorder(root->left);
        printf("%d ", root->val);
        inorder(root->right);
    }
}

struct TreeNode *find(struct TreeNode *root, int x) {
    while (root) {
        if (x > root->val)
            root = root->right;
        else if (x < root->val)
            root = root->left;
        else
            return root;
    }
    return NULL;
}

struct TreeNode *insert(struct TreeNode *root, int x) {
    if (!root) {
        root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        root->val = x;
        root->left = root->right = NULL;
    } else {
        if (x < root->val)
            root->left = insert(root->left, x);
        else if (x > root->val)
            root->right = insert(root->right, x);
    }
    return root;
}

int main(void) {
    /* 构造树 - 开始 */
    struct TreeNode *root = NULL;
    int a[] = {7, 3, 15, 9, 20};
    int k;
    for (k = 0; k < 5; k++) root = insert(root, a[k]);
    /* 构造树 - 结束 */
    
    inorder(root);
    printf("\n");
    return 0;
}
