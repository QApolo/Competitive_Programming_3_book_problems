#include <bits/stdc++.h>

using namespace std;

struct Vendor
{
	string name;
	int low_price;
	int high_price;
};

bool compare(Vendor a, Vendor b)
{
	return a.low_price < b.low_price;
}

string seeking(const vector<Vendor> &data,int middleRange)
{

	int counter = 0;
	string found = "UNDETERMINED";
	for(int i = 0; i < data.size(); i++)
	{
		if(data[i].low_price <= middleRange && data[i].high_price >= middleRange) 
		{
			counter ++;
			found = data[i].name;
		}
		if(counter > 2) break;
	}
	if(counter == 1) return found;
	else return "UNDETERMINED";
}
int main()
{

	int t,d,q, p;
	vector <Vendor> vendors;

	cin >> t;	
	
	while(t--)
	{
		cin >> d;
		vendors.resize(d);

		for(int i = 0; i < d; i++)
		{
			cin >> vendors[i].name;
			cin >> vendors[i].low_price;
			cin >> vendors[i].high_price;
		}
		sort(vendors.begin(),vendors.end(),compare);
		cin >> q;
		while(q--)
		{
			cin >> p;
			cout << seeking(vendors,p) << endl;
		}
		if(t > 0)
			cout << endl;

	}

	return 0;
}