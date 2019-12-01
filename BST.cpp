#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define get(a) ll a; cin >> a;
#define show(a) cout << a << endl;
#define full(p) p.begin(), p.end()
#define sz(a) ll(a.size())


struct node 
{ 
    int key; 
    int sum;
    int number_of_students_before_this;
    struct node *left, *right; 
};
   
// A utility function to create a new BST node 
struct node *newNode(int item , int sum, int number_of_students_before_this); 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->key = item; 
    temp->sum = sum;
    temp->number_of_students_before_this = number_of_students_before_this;
    temp->left = temp->right = NULL; 
    return temp; 
} 
   
// A utility function to do inorder traversal of BST 
void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d \n", root->key); 
        inorder(root->right); 
    } 
} 
   
/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key, int sum, int number_of_students_before_this) 
{ 
    /* If the tree is empty, return a new node */
    if (node == NULL)
    	return newNode(key, sum, number_of_students_before_this);  // key, sum_For_That_Key, number_of elements before that key

  
    /* Otherwise, recur down the tree */
    if (key < node->key)
    {
    	node->sum += sum;
    	node->number_of_students_before_this++;
    	///////////////////// now  we have updated the parameters , now we will put the node at the further apt place

    	node->left  = insert(node->left, key, sum, number_of_students_before_this); 
    }
    else if (key > node->key) 
    {
    	sum += node->sum;
    	number_of_students_before_this += node->number_of_students_before_this;
    	//////////////////// now we have updated the parameters , now we will put the node at the further apt place

    	node->right = insert(node->right, key, sum, number_of_students_before_this);    
    }
  
    /* return the (unchanged) node pointer */
    return node; 
} 


int number_of_students_before(struct node * root, int sum_limit)
{
	if(!root)
		return 0;
	// we want the predecessor of the given sum_limit
	
}



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.precision(10);
	cout<<fixed;
	////////////////////////////////
	get(n);
	get(m);
	struct node * root = NULL;
	std::vector<int> vec;

	for (int i = 0; i < n; ++i)
	{
		get(ni);
		vec.push_back(ni);
	}
	// now we have all the guys ,,now we need to see who all need to fail
	cout << 0 << " ";
	insert(root, vec[0], vec[0], 0) ; //we assume that first guy will always passs
	for(int i = 1 ; i<n ; i++)
	{
		int j = number_of_students_before(root, m - vec[i]);
		// m -vec[i] marks bache hain, uske predecessor nikalna hai
		//usla parameters will tell how many students will pass within that window
		int students_who_fail = i - 1 - j;
		cout << students_who_fail << " ";

		insert(root, vec[i], vec[i], 0 );
	}
	cout << endl;
	return 0;
}
