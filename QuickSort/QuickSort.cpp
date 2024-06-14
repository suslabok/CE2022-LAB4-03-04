#include <iostream>
#include <algorithm>
#include <chrono>
#include <cmath>
using namespace std;

int rand_num(){
  return (int)((float)rand()/(float) RAND_MAX*100);
}
int Partition(int a[], int low,int high){
	int pivot=a[low];
	int i=low;
	int j=high;
	while(i<j){
		while(j>low && a[j]>=pivot){
			j--;
		}
		while(i<high && a[i]<=pivot){
			i++;
		}
		if(i<j){
			swap(a[i],a[j]);
		}
	}
	swap(a[low],a[j]);
  	return j;
}
void QuickSort(int a[],int low,int high){
	if(low<high){
		int pivot=Partition(a,low,high);
		QuickSort(a,low,pivot-1);
		QuickSort(a,pivot+1,high);
	}
	return;
}

void Randomnumarray(int length){
	srand(time(NULL));
	int arr[length];
	for(int i=0;i<length;++i){
		arr[i]=rand_num();
	}
	
//	for(int i=0;i<length;++i){
//		cout<<arr[i]<<",";	
//	}
//	cout<<endl;
    	auto start=chrono::high_resolution_clock::now();
	QuickSort(arr,0,length-1);
    	auto end=chrono::high_resolution_clock::now();
	cout<<"For size"<<length<<" Time taken= ";
    	cout<<chrono::duration_cast<chrono::nanoseconds>(end-start).count()<<"ns\n";
//	for(int i=0;i<length;++i){
//		cout<<arr[i]<<",";	
//	}
//	cout<<endl;
	return ;
}
int main(){
    for(int i=0;i<30;++i){
	    int length=rand_num();
    	    Randomnumarray(length);
    }
    return 0;
}
