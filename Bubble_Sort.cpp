#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std ;

int RandomArray(int tab[], int n){
	srand(time(0));
	for (int i=0; i < n; i++)
	tab[i] = rand() % 100; 
	return 0;
}

int Print(int tab[], int n){
	for (int i=0; i < n; i++)
	cout<<tab[i]<<" ";
	cout<<endl;
 	return 0;
}


int BubblekSort (int T[],int n){
	int i, j;
	
	//uzupełnić kod
	for(j=0;j<n-1;j++){
	    for(i=0;i<n-1;i++){
	        if(T[i]>T[i+1]){
	            swap(T[i],T[i+1]);
	        }
	    }
	}
}

int main ( ) {
	const int N=100;	
	int A[N];
	setlocale(LC_CTYPE, "Polish");
	

	RandomArray(A,N);
	cout << "Tablica na wejściu: " << endl;
	Print(A, N);
	BubblekSort(A, N);
	cout << "Tablica posortowana: " << endl;
	Print(A,N);

	return 0;
}
 

