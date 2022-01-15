#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

class Sorting{
private:
	void swap(int arr[], int i, int j);	
public:
	void selectionSort(int arr[], int N);
};

void Sorting::swap(int arr[], int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void Sorting::selectionSort(int arr[], int N){
	for(int i=0; i<N-1; i++){
		int min = i;
		for(int j=i+1; j<N; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		swap(arr, i, min);
	}
}

int main(int argc, char** argv) {
	Sorting *s = new Sorting();
	int n = 20;
	int arr[n];
	srand(time(0));
	for(int i=0; i<n; i++){
		arr[i]=rand()%100+1;
		cout << arr[i] << " ";
	}
	cout << "My Array" << endl << endl;
	
	s->selectionSort(arr, n);
	
	for(int i=0; i<n; i++){
		cout << arr[i] << " " ;
	}
	cout << "Selection Sort";
	
	/*int arr[20] = {84, 51, 45, 24, 100, 7, 70, 6, 47, 73, 12, 67, 19, 13, 35, 16, 22, 37, 29, 89};
	
	Sorting *s = new Sorting();
	
	s->selectionSort(arr, 20);
	
	for(int i=0; i<20; i++){
		cout << arr[i] << "  " ;
	}*/
	
	return 0;
}
