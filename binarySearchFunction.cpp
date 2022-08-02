#include<iostream>
using namespace std;
int b_search(int arr[], int low, int high, int mid, int x ){
while(low<=high){
	mid=(low+high)/2;

	if(arr[mid]== x){
		break;
	} else if(arr[mid]>x){
		high=mid-1;
	} else if(arr[mid]<x){
	    low=mid+1;
	}
}
return arr[mid];
}
int main(){

int arr[] = {2,6,7,12,16,19,21};
int low=0, high=6, mid, x=21, result;

result = b_search(arr, low, high, mid, x);

//cout<<result;


//if(low>high){
//
//} else{
//}

if(result != x){
	cout<<x<<" is not find in this array.";
} else{
    cout<<x<<" is find."<<mid<<"th index no.";

}


}
