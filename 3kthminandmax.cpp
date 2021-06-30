#include<iostream>
#include<algorithm>
using namespace std;

struct Pair {
	int max;
	int min;
};

struct Pair getMinMax(int arr[], int n, int k){
	struct Pair minmax;
	sort(arr, arr+n); // this is a hybrid algo known as introsort
	for(int i =0; i<n; i++)
		cout<< arr[i] <<" ";
	minmax.min = arr[k-1];
	minmax.max = arr[n-k];
	return minmax;
}

int main(){
	int arr[10] = {1,22,3,14,5,61,7,18,9,21};
	struct Pair minmax = getMinMax(arr, 10, 3);
	cout<<endl;
	cout<<minmax.min<<" "<<minmax.max;
	return 0;
}

// can be solved with heaps, quick sort, STL map