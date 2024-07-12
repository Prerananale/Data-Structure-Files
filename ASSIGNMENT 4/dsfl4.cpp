#include<iostream>
using namespace std;

class graph
{
	private:
	int a,b,n,l,i,j,cost[10],mat[10][10],dest[10],path[20];
	int edges,min,ncost,x,curdest,s,d,k,m,final=0;
	int visit[10];
	public:
	
	graph(int a,int b)
	{
		edges=a;
		ncost=b;
	}
	void dijkshtraw(int mat[10][10],int n);
	void display();
	void read();
};
void graph::read()
{
	cout<<"\nenter the no.of vertices:";
	cin>>n;
	cout<<"\nenter the weight of the edges:";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>mat[i][j];
			if(mat[i][j]==0)
				mat[i][j]=99;
		}
	}
	dijkshtraw(mat,n);
}
void graph::dijkshtraw(int mat[10][10],int n)
{
	cout<<"\nenter the source node:";
	cin>>s;
	cout<<"\nenter the destination node:";
	cin>>d;
	for(i=1;i<=n;i++)
	{
		cost[i]=99;
	}
	cost[s]=0;
	x=s;
	visit[x]=1;
	while(x!=d)
	{
		curdest=cost[x];
		min=99;
		for(i=1;i<=n;i++)
		{
			if(visit[i]==0)
			{
				ncost=curdest+mat[x][i];
				if(ncost<cost[i])
				{
						cost[i]=ncost;
						dest[i]=x;
				}
				if(cost[i]<min)
				{
						min=cost[i];
						k=i;
				}
			}
		}
		x=k;
		visit[x]=1;
	}
	display();
}
void graph::display()
{
		l=d;
		path[final]=d;
		final++;
		while(dest[l]!=s)
		{
			m=dest[l];
			l=m;
			path[final]=l;
			final++;
		}
		path[final]=s;
		cout<<"/nshortest path is:";
		for(l=final;l>=1;l--)
		{
			cout<<"\n"<<path[l]<<"  --> "<<path[l-1]<<"  :"<<mat[path[l]][path[l-1]];
		}
		cout<<"\n total cost: "<<cost[d];
}
int main()
{
	graph g(1,0);
	g.read();
}
		
	
