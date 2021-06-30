#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int lo=0;
    int mid=0;
    int hi=n-1;
    
    while(mid<=hi){
        switch(a[mid]){
            case 0:
                swap(a[lo++],a[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid],a[hi--]);
                break;
        }
    }
}
int main(){
	int arr[] = {1,0,2,0,1,1,2,0,2,0,0,1,0,2,1};
	int n=sizeof(arr) / sizeof(arr[0]);
	sort012(arr,n);
	for(int i =0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
	
}


// }

// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0; i<n; i++){
// 		cin>>arr[i];
// 	}
// 	for(int i =0; i<n; i++){
// 		if arr[i]>
// 	}
// }
