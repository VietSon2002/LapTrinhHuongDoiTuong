#include <iostream>
using namespace std;
void PrintArrary(int a[], int n) {
	cout << endl;
	for (int i = 0; i< n; i++) {
		cout << a[i] <<" ";
	}
}
void AddElement(int a[], int &n, int value, int t) {
    int new_n = n+1;
    int newArrary[new_n];
    int newIndex = 0;
    for (int i = 0; i < n; i++){
        if (i == t){
            newArrary[newIndex] = value;
            newIndex++;
        }
        newArrary[newIndex] = a[i];
        newIndex++;
    }
    n = new_n;
    for (int i = 0; i < new_n ; i++){
        a[i] = newArrary[i];
    }
}
void DeletElement(int a[], int &n, int t){
    for(int i = t ; i < n-1 ; i++)
        a[i]= a[i+1];
        n--;
    }
void ArrarySort(int a[],int &n,int ngc){
    for (int i = 0; i < n-1; i++){
	     for (int j = i+1 ; j < n; j++)
	     {
	         if (a[i]> a[j])
	             swap(a[i],a[j]);
	     }
	}
	if(ngc == -1){
		for (int i = 0; i < n / 2; i++) {
        	int temp = a[i];
        	a[i] = a[n - 1 - i];
        	a[n - 1 - i] = temp;
    	}
	}
}
void Frequency(int a[], int &n){
	int dem=1;
 	for (int i = 0; i < n; i++){
    	if (i < n-1 &&a[i] ==a[i+1]){
        	dem++;
    	}
    	else {
			cout << "(" << a[i] << "," << dem << ") ";
        	dem = 1;
    		}
	}
}
int main() {
	int n;
	cout << "Nhap so phan tu cua mang:  ";
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
//	AddElement(a,n,1000,3);
//	DeletElement(a,n,2);
    ArrarySort(a,n,0);
    Frequency(a,n);
	PrintArrary(a,n);
	return 0;
}
