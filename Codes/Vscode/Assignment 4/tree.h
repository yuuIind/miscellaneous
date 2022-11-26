#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Tree;

template <class T>
class TreeNode {
private:
	TreeNode<T> * left;
	TreeNode<T> * right;
	int data;

public:
	TreeNode(const T & el) {
		data = el;
		left = NULL;
		right = NULL;
	}

	friend class Tree<T>;
};


template<class T>
class Tree {

public:
	TreeNode<T> * root;

	Tree() {
		root = NULL;
	}

	void insertBST(int el) {
        TreeNode<T>* temp = root; //starts from root

        if (root == NULL) { //if root is empty
            root = new TreeNode<T>(el);
        }

        while(temp != NULL) {  //until it inserts to the suitable empty node, it iterates
            if(el < temp->data){ //to search left side when el < data
                if(temp->left != NULL) { // if the left is not empty goes to left
                    temp = temp->left;
                }
                else { // if the left is empty creates a new node
                    temp->left = new TreeNode<T>(el);
                    break;
                }
            }
            else if(el > temp->data) {//to search right side when el > data
                if(temp->right != NULL) { // if the right is not empty goes to right
                    temp = temp->right;
                }
                else { // if the right is empty creates a new node
                    temp->right = new TreeNode<T>(el);
                    break;
                }
            }
            else {
                cout<<"This item is already inserted"<<endl; //if same item is entered prints a message
                return;
            }
        }
	}

	void insertWrong(int el){
        TreeNode<T>* temp = root; //starts from root
        int sel = el; //sel is a variable to randomize insertion

        if (root == NULL) { //if root is empty
            root = new TreeNode<T>(el);
        }

        while(temp != NULL) {  //until it inserts to the suitable empty node, it iterates
            if((sel%2) != 0){ //if sel is odd, goes to right side
                if(temp->left != NULL) { // if the left is not empty goes to left
                    temp = temp->left;
                }
                else { // if the left is empty creates a new node
                    temp->left = new TreeNode<T>(el);
                    break;
                }
            }
            else if(!(sel%2)) {//if sel is even, goes to search left side
                if(temp->right != NULL) { // if the right is not empty goes to right
                    temp = temp->right;
                }
                else { // if the right is empty creates a new node
                    temp->right = new TreeNode<T>(el);
                    break;
                }
            }
            else {//when same item is entered, prints an error message
                cout<<"Error: Could not insert item"<<endl;
                cout<<"This item is already inserted!"<<endl;
                return;
            }
            sel +=1; // to maximize randomness, sel's value changes
        }
	}

	bool isThisaBST(TreeNode<T>* treeNode){
        static int prev_data = 0; //to store previous nodes data (that's why it is static)
        if(treeNode == NULL){ //if tree is empty returns true
            return true;
        }
        else{//if tree is not empty
            if(!(isThisaBST(treeNode->left))){ //checks whether left subtree is a BST or not
                return false; //if it is not returns false
            }
            if((prev_data != 0) && (prev_data >= treeNode->data)){ //if the left child greater, returns false
                return false;
            }
            prev_data = treeNode->data; //replace with previous data with the current data before checking right subtree
            return isThisaBST(treeNode->right); //check the right tree. executing this line means that...
            //... the left subtree is a BST, and if right subtree is also BST, then whole tree is BST
        }
	}

	int findHeight(TreeNode<T>* treeNode){//height of a tree equals to the maximum height of the subtree + 1
        //this means that height can be found recursively
        TreeNode<T>* temp = treeNode;
        int depth_left = 1; //1 is due to root
        int depth_right = 1;
        if(temp == NULL){ //if treeNode is empty, returns 0
            return 0;
        }

        depth_left += findHeight(temp->left); // to find height of left side of tree == (max(leftsubtree) + 1)
        depth_right += findHeight(temp->right);//to find height of right side of tree == (max(rightsubtree) + 1)

        if(depth_left > depth_right){ //if left side is greater returns left side's height + 1
            return depth_left;
        }
        else{//if right side is greater returns right side's height + 1
            return depth_right;
        }
	}

	vector<int> findOnlyChild(TreeNode<T>* treeNode){
        //THIS FUNCTION DOESN'T WORK, SO I TRIED TO EXPLAIN WHAT I WANTED TO DO WITH COMMENTS
        /* CODE STARTS HERE----
        vector<int> onlyChildren; //the vector that will be returned
        if(treeNode == NULL) { //if its null return a 0
            onlyChildren.push_back(0);
            return onlyChildren;
        }
        else {
            if((treeNode->left == NULL) && (treeNode->right != NULL)) { //if right child is only child
                onlyChildren.push_back((treeNode->right)->data);  //add right child's data to vector list
            }
            if((treeNode->right == NULL) && (treeNode->left != NULL)){//if left child is only child
                onlyChildren.push_back((treeNode->left)->data);  //add left child's data to vector list
            }
            //check for left and right subtrees recursively and add only children from them to vector list
            onlyChildren.push_back(findOnlyChild(treeNode->left));//check for left subtree and add them
            onlyChildren.push_back(findOnlyChild(treeNode->right));//check for right subtree and add them
        }
        return onlyChildren; //returns overall vector list that contains only children
        =>IT STOPS HERE */
	}


	void inOrder(TreeNode<T>* treeNode){
        TreeNode<T>* temp = treeNode; //starts from root

        if(temp != NULL)
        {
            inOrder(temp->left);
            cout<<temp->data<<", ";
            inOrder(temp->right);
        }
	}

};

