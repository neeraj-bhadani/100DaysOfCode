#include <bits/stdc++.h>
using namespace std;

// o(n^2)
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i =0; i<n; i++){
// 		cin>>arr[i];
// 	}
// 	int max, min;
// 	max = arr[0];
// 	min = arr[0];
// 	for(int i =0; i<n; i++){
// 		if(arr[i]>max){
// 			max = arr[i];
// 		}
// 	}
// 	for(int i =0; i<n; i++){
// 		if(arr[i]<min){
// 			min = arr[i];
// 		}
// 	}
// 	cout << max << " "<< min;
// }

// O(n)
// Tournament method

// struct Pair{
// 	int min;
// 	int max;
// };

// struct Pair getMinMax(int arr[], int low, int high){
// 	struct Pair minmax, mml, mmr;
// 	int mid;

// 	// if one element in array
// 	if(low == high){
// 		minmax.min= arr[low];
// 		minmax.max= arr[low];
// 		return minmax;
// 	}
// 	// if two element in array
// 	if(high == low+1){
// 		if(arr[low]>arr[high]){
// 			minmax.min = arr[high];
// 			minmax.max = arr[low];
// 		}
// 		else{
// 			minmax.max = arr[high];
// 			minmax.min = arr[low];
// 		}
// 		return minmax;	
// 	}
// 	// if more than 2 elements
// 	mid = (low+high)/2;
// 	mml = getMinMax(arr, low, mid);
// 	mmr = getMinMax(arr, mid+1, high);

// 	if (mml.min > mmr.min){
// 		minmax.min = mmr.min;
// 	}
// 	else{
// 		minmax.min = mml.min;
// 	}

// 	if (mml.max > mmr.max){
// 		minmax.max = mml.max;
// 	}
// 	else{
// 		minmax.max = mmr.max;

// 	}
// 	return minmax;
// }

struct Pair{
	int min;
	int max;
};

struct Pair getMinMax(int arr[], int n){
	struct Pair minmax;
	int i;
	// check even
	if(n%2==0){
		if(arr[0]>arr[1]){
			minmax.max = arr[0];
			minmax.min = arr[1];
		}
		else{
			minmax.max = arr[1];
			minmax.min = arr[0];
		}
		i = 2;
	}
	// check odd
	else{
		minmax.min = arr[0];
		minmax.max = arr[0];
		i = 1;
	}

	while(i<n-1){
		if(arr[i]>arr[i+1]){
			if(arr[i]>minmax.max)
				minmax.max = arr[i];
			if(arr[i+1]<minmax.min)
				minmax.min = arr[i+1];
		}
		else{
			if(arr[i+1]>minmax.max)
				minmax.max = arr[i+1];
			if(arr[i]<minmax.min)
				minmax.min = arr[i];
		}
		i+=2;
	}
	return minmax;
}

// driver code

int main(){
	int n =10;
	int arr[10] = {1,4,6,9,0,21,3,110,52,7};

	struct Pair minmax = getMinMax(arr, 10);
	cout<< minmax.max << "  "<< minmax.min;
	return  0;
}
