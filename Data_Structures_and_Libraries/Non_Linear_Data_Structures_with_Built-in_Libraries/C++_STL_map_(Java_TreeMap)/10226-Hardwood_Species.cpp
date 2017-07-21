#include <bits/stdc++.h>

using namespace std;

int main()
{

	map <string, int> trees;
	map <string,int>::iterator it;

	int t;
	char space;
	int c;

	string name_tree;	
	scanf("%d\n",&t);

	while(t--)
	{
		int total_trees= 0;
		while(getline(cin,name_tree) && !(name_tree == "\n" || name_tree == ""))
		{
			trees[name_tree] ++;
			total_trees ++;
		}	

		for(it = trees.begin(); it != trees.end(); it++)
		{
			cout << it->first << " ";
			printf("%.4f\n",(float)((float)(it->second)/((float)total_trees))*100 );
		}
		trees.clear();
		if(t != 0)
			cout << '\n';
			
	}
	return 0;
}