#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	
	long long *arr = new long long[n];
	long long x;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	cin >> x;
	
	for(int i=0; i<n; i++){
		if(arr[i] == x){
			cout<<i;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}
