#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
		
	for(int i=0; i<n; i++){
		if(arr[i]&1)
			cout<<arr[i]<<" ";
		else
			cout<<arr[i]-1<<" ";
	}
		
	return 0;
}
