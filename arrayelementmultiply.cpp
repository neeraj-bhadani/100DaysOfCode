#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i =0; i<n ; i++){
		cin>> arr[i];
	}
	long int result = 1;
	for (int i =0 ; i<n; i++){
		result = result  * arr[i] % 1000000007;
	}
	cout<< result ;

}