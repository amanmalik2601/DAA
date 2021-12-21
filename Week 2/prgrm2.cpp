#include<iostream>

using namespace std;

int main(void){
	int t;
	cin>>t;
	while(t--){
		int flag = 0,n,i,j,k;
		cin>>n;
		int arr[n];
		for(i = 0;i < n;i++)
			cin>>arr[i];
		
		for(i = 0;i < n-2;i++){
			for(j = i+1;j < n-1;j++){
				for(k = j+1;k < n;k++){
					if(arr[i] + arr[j] == arr[k]){
						cout<<i<<","<<j<<","<<k<<endl;
						flag = 1;
						break;
					}	
				}	
			}
		}
		if(flag == 0)
			cout<<"No sequence found"<<endl;
	}
}
