#include<bits/stdc++.h>
using namespace std;

int main()
{	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		
freopen("output.txt","w",stdout);
	#endif

		int t; // t represents No of test cases
		int n; // n represents no elements in array
		int key; // Element to be searched

		cin>>t;

	while(t--)
	{
		cin>>n;
		vector<int>arr;

		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			arr.push_back(temp);
		}
		cin>>key;

		for(int i=0;i<n;i++)
		{
			if(arr[i]==key)
			{
				cout<<"Present "<<i+1<<endl;
				break;
			}

			if(i==n-1)
				cout<<"Not Present "<<i+1<<endl;

		}
	}
	return 0;	
}

