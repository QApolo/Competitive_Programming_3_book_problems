#include <bits/stdc++.h>

using namespace std;

int main()
{	

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, query, val;
	bool is_stack, is_queue, is_p_queue;

	stack <int> st;
	queue <int> qu;
	priority_queue <int> pqu;
	while(cin >> n)
	{
		st = stack<int>();
		qu = queue <int>();
		pqu = priority_queue<int>();
		is_stack = is_queue = is_p_queue = true;
		for(int i = 0; i < n; i++)
		{
			cin >> query >> val;
			
			if(query == 1)
			{
				st.push(val);
				qu.push(val);
				pqu.push(val);
			}
			else
			{
				if(!qu.empty())
				{
					if(qu.front() != val)
					{
						is_queue = false;		
					}
					qu.pop();
				}
				else
				{
					is_queue = false;
				}
				
				if(!st.empty())
				{
					if(st.top() != val)
					{
						is_stack = false;
						
					}
					st.pop();	
				}
				else
				{
					is_stack = false;
				}
				if(!pqu.empty())
				{
					if(pqu.top() != val)
					{
						is_p_queue = false;
						
					}
					pqu.pop();	
				}
				else is_p_queue = false;
				
			}	
		}
		if(is_stack && !is_queue && !is_p_queue)
		{
			cout << "stack" << '\n';
		}
		else if(is_queue && !is_stack && !is_p_queue)
		{
			cout << "queue" << '\n';
		}
		else if(is_p_queue && !is_stack && !is_queue)
		{
			cout << "priority queue" << '\n';
		}
		else if(!is_p_queue && !is_stack && !is_queue)
		{
			cout << "impossible" << '\n';
		}
		else
		{
			cout << "not sure" << '\n';
		}
	}

	return 0;
}