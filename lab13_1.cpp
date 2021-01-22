#include <iostream>
using namespace std;

template <typename T>
void show(T d[],int N){
 for(int i = 0; i < N; i++){
  cout << d[i] << " ";
 }
}


template <typename T>
void insertionSort(T d[],int N){
	int u=1;
	for(int end=1;end<N;end++){
	  for(int i =end;i>0;i--){
		  int q=1;
		  if(d[i]>d[i-q]){
			  T temp =d[i];
			  d[i]=d[i-1];
			  d[i-1]=temp;
		  }
	  }
	  cout <<"Pass "<<u<<":";
	  show(d,N);
	  cout <<"\n";
	  u++;

	   }
}
 

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}  

