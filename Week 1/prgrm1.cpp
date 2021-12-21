#include<iostream>

using namespace std;

int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int A[n];
		for(int i = 0;i < n;i++)
			cin>>A[i];
			
		int key;
		cin>>key;
		int count = 0,flag = 0;
		int low = 0,high = n-1,mid = (low + high)/2;
		while(low <= high)
		{
			if(key == A[mid])
			{
				count++;
				flag = 1;
				break;
			}
			else if(key < A[mid])
			{
				high = mid - 1;
				mid = (low + high)/2;
				count++;
			}
			else if(key > A[mid])
			{
				low = mid + 1;
				mid = (low + high)/2;
				count++;
			}
		}
		if(flag == 1)
			cout<<"Present"<<" "<<count<<endl;
		else
			cout<<"Not Present"<<" "<<count<<endl;
	}
}
