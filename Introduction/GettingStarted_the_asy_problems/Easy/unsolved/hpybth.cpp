#include <bits/stdc++.h>

using namespace std;

struct person
{
	string nombre;
	int canto;
};
typedef struct person person;

int hasSung(vector <person> noms)
{
	for(int i=0;i<noms.size();i++)
		if(noms[i].canto==0)return 0;
return 1;
}
int main()
{
	int n,nc;
	cin>>n;
	nc=n;
	person nom;
	vector <person> noms;

	while(n--)
	{
		cin>>nom.nombre;
		nom.canto=0;
		noms.push_back(nom);
	}

	vector<string> song;
	song.push_back("Happy");
	song.push_back("birthday");
	song.push_back("to");
	song.push_back("you");

	song.push_back("Happy");
	song.push_back("birthday");
	song.push_back("to");
	song.push_back("you");

	song.push_back("Happy");
	song.push_back("birthday");
	song.push_back("to");
	song.push_back("Rujia");

	song.push_back("Happy");
	song.push_back("birthday");
	song.push_back("to");
	song.push_back("you");

	int i=0;
	for(int j=0;j<nc;j++)
	{
		for(int k=0;k<nc;k++)
			noms[k].canto=0;
		while(!hasSung(noms)||i<nc*nc+1)
		{	
			cout<<noms[i%nc].nombre<<": "<<song[i%16]<<endl; 
			noms[i%nc].canto++;
			i++%nc;
		}
	}
		


	

return 0;
}