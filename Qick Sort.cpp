#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr,int low,int hight){
	int pivot=arr[hight];
	int i=(low-1);
	for(int j=low;j<hight;j++){
		if(arr[j<=pivot]){
			i++;
			swap(arr[j],arr[i]);
		}
	}
	swap(arr[i+1],arr[hight]);
	return (i+1);
}
void QuickSort(vector<int> &arr, int low,int hight){
	if(low<hight){
		int pi=partition(arr,low,hight);
		QuickSort(arr,low,pi-1);
		QuickSort(arr,pi+1,hight);
	}
}
int main(){
	vector<int> arr={6,3,9,5,2,8,7};
	int hight=arr.size()-1;
	int low=0;
	QuickSort(arr,low,hight);
	cout<<"Quick Sorted Array Is:";
	for(int i=1;i<=arr.size();i++){
		cout<<arr[i];
	}
}
