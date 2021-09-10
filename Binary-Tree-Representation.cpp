#include <bits/stdc++.h>
#define int long long
using namespace std;

struct node
{
	int data;
	struct node *left, *right;

	node(int d)
	{
		data = d;
		left = right = NULL;
	}
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	struct node *root = new node(5);
	root->left = new node(6);
	root->right = new node(7);
	root->left->left = new node(8);
	root->left->right = new node(9);
	root->left->right->left = new node(1);

    return 0;
}