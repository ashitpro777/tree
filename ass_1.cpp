#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int> a[], int u, int v)
{
	a[u].push_back(v);
	a[v].push_back(u);
}

void maketree(vector<int> a[], int n)
{
        cout<<"\n---------For Tree Topology-----------\n";		
    int d, count;
	cout<<"Enter the degree:\n";
	cin>>d;
	count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=count+1;(j<=count+d)&&(j<n);j++)
		{
			addedge(a,i,j);

		}
		count+=d;
	}

}

void makestar(vector<int> a[],int n)
{
        cout<<"\n---------For Star Topology-----------\n";		
    int origin=0;
	for(int i=1;i<n;i++)
		addedge(a,origin,i);
}

void makering(vector<int>a[], int n)
{
    cout<<"\n---------For Ring Topology-----------\n";	
    for(int i=0;i<n;i++)
	{
		addedge(a,i,(i+1)%n);
	}
}



void printgraph(vector<int> a[], int V)
{
    int d=0;	
    for(int i=0;i<V;i++)
	{
        d=0;		
        cout<<"Adjaceny list of vertex "<<i<<"\nhead";
		for(auto x: a[i])
			{
                cout<<" -> "<<x;
                d++;
            }
		cout<<"\nAnd its degree is "<<d<<"\n";	
	}
}

int main()
{
	int n;
	cout<<"Enter the no. of vertices:\n";
	cin>>n;
	vector<int> m[n];
	maketree(m,n);
	printgraph(m,n);
vector<int> p[n];
	makering(p,n);
	printgraph(p,n);
vector<int> z[n];
	makestar(z,n);
	printgraph(z,n);
}
