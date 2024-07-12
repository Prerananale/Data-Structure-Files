#include<iostream>
using namespace std;
typedef struct node
{
int data;
node *left,*right;
}root;
class tree
{
	public:
	root *nw1;
	int key;
	
	void insert(root*,root*);
	void inorder(root*);
	void preorder(root*);
	void postorder(root*);
};

	void tree::insert(root *root1,root *nw1)
	{
	if(nw1->data>root1->data)
	{
		if(root1->right==NULL)
		{
		root1->right=nw1;
		}
		else
		{
		insert(root1->right,nw1);
		}
	}
	else
	{
		if(root1->left==NULL)
		{
		root1->left=nw1;
		}
		else
		{
		insert(root1->left,nw1);
		}
	}
	}
void tree::inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data;
		inorder(root->right);
		
	}
	
}
void tree::preorder(root *nw1)
{
	if(nw1!=NULL)
	{
		cout<<nw1->data;
		inorder(nw1->left);
		inorder(nw1->right);
	}
	
}
void tree::postorder(root *nw1)
{
	if(nw1!=NULL)
	{
		
		inorder(nw1->left);
		inorder(nw1->right);
		cout<<nw1->data;
	}
	
}

int main()
{
tree s;
int data1,key,c,ch,c1;
root *nw1,*root1=NULL;
do
{
cout<<"1.insert data"<<endl;
cout<<"enter your choice"<<endl;
cin>>ch;
switch(ch)
{
	case 1:
	do
	{
	nw1=new root();
	cout<<"enter the data";
	cin>>data1;
	nw1->data=data1;
	nw1->right=NULL;
	nw1->left=NULL;
	if(root1==NULL)
	{
	root1=nw1;
	}
	else
	{
	s.insert(root1,nw1);
	}
	cout<<"add more data then press 1:";
	cin>>c;
	
	
	}while(c!=2);
	break;
	case 2:
	
	s.inorder(root1);
	
	break;

	
	
}
cout<<"if you want to continue press 1 else press 2"<<endl;
cin>>c1;

}while(c1!=2);
return 0;
}

