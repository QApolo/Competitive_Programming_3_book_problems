#include <bits/stdc++.h>
 using namespace std; 
 int main() 
 {

 	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int t;
	cin>>t;
	int r,k=0;
	int nums[3];
	while(t--)
	{
		cout<<"Case "<<++k<<": ";
		for(int i=0;i<3;i++)
			cin>>nums[i];
		if(nums[0]>nums[1]&&nums[1]>nums[2])
			cout<<nums[1]<<'\n';
		else if(nums[0]>nums[2]&&nums[2]>nums[1])
			cout<<nums[2]<<'\n';
		else if(nums[1]>nums[2]&&nums[2]>nums[0])
			cout<<nums[2]<<'\n';
		else if(nums[1]>nums[0]&&nums[0]>nums[2])
			cout<<nums[0]<<'\n';
		else if(nums[2]>nums[0]&&nums[0]>nums[1])
			cout<<nums[0]<<'\n';
		else if(nums[2]>nums[1]&&nums[1]>nums[0])
			cout<<nums[1]<<'\n';
		
	}
return 0;
}