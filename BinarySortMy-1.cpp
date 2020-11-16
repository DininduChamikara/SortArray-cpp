// Binary search
#include<iostream>
using namespace std;

int biSearch(int A[], int V, int L, int R );	// to define the function

int main(){
//	int Arr[6]={1,5,3,2,8,7};	// to check, does it work for unsorted array 
								// it does not work
								
	int Arr[6]={1,2,3,4,5,6};	// initialized a sorted array
	
	cout<<"position of 2 point is "<<biSearch(Arr, 2, 0, 5)<<endl;	// call the function and print the result
	
	cout<<"position of 2 point is "<<biSearch(Arr, 8, 0, 5)<<endl;	// if value does not in the array
}

int biSearch(int A[], int V, int L, int R ){	// V = element that we need to find
												// L = Left element index
												// R = Right element index
												
	int mp = (L+R)/2;	// initialized mid point position
	
	if(A[mp]==V)		// check the choosed mid point, is equal to eliment V 
		return mp;
	
	else{
		if(L>R)				// check, is order asending and if V does not exist in the array 
			return -1;		// break 
			
		else{				// order is assending, so continue...
		
			if(A[mp]<V)						
				biSearch(A, V, mp+1, R);	// call right part from mid point to function
			else
				biSearch(A, V, L, mp-1);	// call left part from mid point to function
		}
	}
		
}


