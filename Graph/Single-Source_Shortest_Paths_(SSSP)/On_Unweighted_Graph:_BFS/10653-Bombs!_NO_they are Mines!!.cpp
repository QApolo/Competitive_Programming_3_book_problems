#include <bits/stdc++.h>
//https://uva.onlinejudge.org/external/106/10653.pdf
using namespace std;

#define y first
#define x second

int r,c;

int movs[4][2] = {
			{0,1},
			{1,0},
			{-1,0},
			{0,-1}
};

void init(vector < vector<pair<int,int> > > &mapa)
{
	int w = mapa.size();
	int h = mapa[0].size();
	for(int i = 0; i < w; i++)
		for(int j = 0; j < h; j++){
			mapa[i][j].y = 0;
			mapa[i][j].x = 0;
		}
}
bool valid(pair <int,int> p,  vector < vector<pair<int,int> > > &mapa)
{
	if(p.y >= r || p.y < 0 || p.x >= c || p.x < 0 ) return false;
	if(mapa[p.y][p.x].y != 0) return false;
	return true;
}
int BFS(vector < vector<pair<int,int> > > &mapa,int sy, int sx, int dy, int dx)
{
	queue <pair <int,int> > puntos;
	pair <int,int> aux;
	aux.y = sy,aux.x = sx;
	puntos.push(aux);
	int time = 0;

	while(!puntos.empty())
	{
		aux = puntos.front();
		if(aux.y == dy && aux.x == dx) return mapa[aux.y][aux.x].x;
		puntos.pop();

		if(mapa[aux.y][aux.x].y == 0)
		{
			mapa[aux.y][aux.x].y = 20;

			for(int i = 0; i < 4; i++)
			{
				pair <int,int> delta;
				delta.y = aux.y + movs[i][0];
				delta.x = aux.x + movs[i][1];
				if(valid(delta,mapa))
				{	
					puntos.push(delta);
					mapa[delta.y][delta.x].x = mapa[aux.y][aux.x].x+1;
				}
			}
		}
		
	}

return time;
}
int main()
{
		int nrows, ncol;
		int posr, posc;
		int sy,sx, dy,dx;
		vector < vector<pair<int,int> > > mapa;
		

		while(cin >> r >> c && !(r==0 && c ==0))
		{

			mapa.resize(r);
			for(int i = 0; i < r; i++)
				mapa[i].resize(c);
			init(mapa);

			cin >> nrows;
			while(nrows--)
			{	
				cin >> posr;
				cin >> ncol;
				while(ncol--)
				{
					cin >> posc;
					mapa[posr][posc].y = 1;
				}
			}

			cin >> sy >> sx;
			cin >> dy >> dx;
			cout << BFS(mapa,sy,sx,dy,dx) << endl;
		}
	return 0;
}
