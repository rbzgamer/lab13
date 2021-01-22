#include <iostream>
using namespace std;

template <typename T>
void Swap(T d[],int x,int y){
	T temp = d[x];
	d[x] = d[y];
	d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int i,j;
	T temp;
	for(i = 1; i < N; i++){
		temp = d[i];
		j = i-1;
		while(j >= 0 && d[j] < temp){
			Swap(d,j+1,j);
			j -= 1;
		}
		d[j+1] = temp;
		cout << "Pass " << i << ":";
		for(int j = 0; j < N; j++) cout << d[j] << " ";
		cout << endl;
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

