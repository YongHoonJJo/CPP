#include "Array10.h"

namespace {
	void swap(int&, int&);
}

void Array10::setArray(int *temp){
	 for(int i=0; i<MAX; i++)
		   arr[i] = temp[i];
}

void Array10::reverse(){
	 for(int i=0; i<MAX/2; i++)
	   swap(arr[i], arr[MAX-i-1]);
}

int Array10::get(int n){
	 return arr[n];
}

namespace {
	void swap(int& a, int& b){
		int temp = a;
		a = b;   
		b = temp;
	}
}

/*
   void Array10::swap(int& a, int& b){
   int temp = a;
   a = b;   
   b = temp;
   }
 */
