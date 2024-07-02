#include <iostream>

using namespace std;

// Implement the node class we will need for our Binary Search Tree
class Node {
	public:
		int key;
		Node *left;
		Node *right;
		// the Node should contain
		// 	- an integer "key" that holds the value of the Node
		// 	- a pointer to each child possible child node ("right" and "left")

		Node(int value){
			key=value;
			left=nullptr;
			right=nullptr;
		}
		// Write a constructor for the Node
		// input: only an integer value for "key", no pointer arguments
		// 		right and left pointers should be null

};


// Use this function to create a Binary Search Tree (BST) tree with the following values
// {13, 0, 7, 6, 21, 15, -2, 12, 99, 18, 19, -1}
Node* createTree() {
	// root
	Node *root = nullptr;
	Node* insertNode(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }
    if (key < root->key) {
        root->left = insertNode(root->left, key);
    } else {
        root->right = insertNode(root->right, key);
    }
    return root;
}

Node* createTree() {
    int values[] = {13, 0, 7, 6, 21, 15, -2, 12, 99, 18, 19, -1};
    int n = sizeof(values) / sizeof(values[0]);

    Node* root = nullptr;
    for (int i = 0; i < n; ++i) {
        root = insertNode(root, values[i]);
    }
    return root;
}

	// level 1 (children of root)

	// level 2 (children of 0)

	// level 2 (children of 21)

	// level 3 (children of -2)

	// level 3 (children of 7)

	// level 3 (children of 15)

	// level 3 (children of 99)

	// level 4 (children of 18)

	return root;
}

// Write a function that will search the BST for a target value
//	input: integer target to search for,
			// pointer to root Node
// 	returns: true or false depending on if the value is found
// You should write this function recursively! What is the base case? What is the general case?
bool searchTree(int target, Node* root) {
	bool searchTree(int target, Node* root) {
		// Base cases
    if (root == nullptr) {
        return false;
    } // General case
	
    if (root->key == target) {
        return true;
    }
    if (target < root->key) {
        return searchTree(target, root->left);
    } else {
        return searchTree(target, root->right);
    }
}
	
	
}

// Write a function that will return the total number of Nodes in the tree
// 	input: pointer to the root Node
// 	returns: number of nodes currently in the tree
// You should write this function recursively!
int treeSize(Node* root) {
	// base cas
	int treeSize(Node* root) {
    if (root == nullptr) {
        return 0;
    }// General case
    return 1 + treeSize(root->left) + treeSize(root->right);
}

}

// BONUS! Write a function that will determine the height of the tree
int treeHeight(Node* root) {
//base case
	int treeHeight(Node* root) {
    if (root == nullptr) {
        return 0;
    }//general case
    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);
    return 1 + max(leftHeight, rightHeight);
}

