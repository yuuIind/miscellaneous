#include "tree.h"
#include <iostream>
using namespace std;


int main(){

    Tree<int> tree;
    tree.insertBST(9);
    tree.insertBST(7);
    tree.insertBST(12);
    tree.insertBST(8);
    tree.insertBST(10); 
    tree.insertBST(15);
    tree.insertBST(17);
    tree.insertBST(27);

    Tree<int> tree2;
    tree2.insertWrong(9);
    tree2.insertWrong(7);
    tree2.insertWrong(12);
    tree2.insertWrong(8);
    tree2.insertWrong(10);
    tree2.insertWrong(15);
    tree2.insertWrong(17);
    tree2.insertWrong(27);

    cout<<"For tree: "<<endl;
    bool x = tree.isThisaBST(tree.root);
    cout<<x<<endl;
    tree.inOrder(tree.root);
    int h = tree.findHeight(tree.root);
    cout<<endl<<h<<endl;
    /*vector<int> onlyChild = {tree.findOnlyChild(tree.root)};
    cout<<"Only children of tree: ";
    for(int i = 0; i < onlyChild.size(); i++){
        cout<<onlyChild[i]<<", ";
    }
    cout<<endl;*/

    cout<<"For tree2: "<<endl;
    bool Y = tree2.isThisaBST(tree2.root);
    cout<<Y<<endl;
    tree2.inOrder(tree2.root);
    int h2 = tree2.findHeight(tree2.root);
    cout<<endl<<h2<<endl;
}