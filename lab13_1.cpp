#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	T l,max;
	for(int i=1;i < N;i++){
		max = d[i];
		if(max<=d[i]){
			l=i;
			for(int j=0;j < N;j++){
				if(j != l) cout << d[j] << " " ;
				else cout << "[" << d[l] << "]" << " " ;
			}
		
		cout << "=> " ;	
		
		for(int k=i-1;k >=0 ;k--){
			if(d[k]<max){
			swap(d,k,l);
			l=k;
			}
		}
		for(int j=0;j < N;j++){
				if(j!=l) cout << d[j] << " " ;
				else cout << "[" << d[j] << "]" << " " ;
		}
	
	cout << "\n" ;
	}}
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
