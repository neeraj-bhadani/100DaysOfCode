#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin>>t;
	while(t!=0){
		cin>>n;
		while(n!=0){
			int rem =0;
			int rev = 0;
			rem = n%10;
			rev = rev*10 + rem;
			n = n/10;
		}
	}
}