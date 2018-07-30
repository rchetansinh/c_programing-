//      tree
//      ----
//       1    <-- root
//     /   \
//    2     3  
//   /   
//  4
//

#include<stdio.h>
#include<string.h>
typedef struct bst
{
	int data;
	struct bst *left;
	struct bst *right;
}BST;
BST new_node(int data)
{
	BST 


}
int main()
{
	BST *root=1;
	root->left=new_node(3);
	root->right=new_node(2);

}
