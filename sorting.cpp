#include<iostream>
using namespace std;
int main(){
	int n;
	int choice;
	cout<<"enter size of array: "<<endl;
	cin>>n;
	
	int a[n];
	
	cout<<"enter element of array: "<<endl;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	cout<<"enter which method we want to use for sorting: "<<endl;
	cout<<"1.Bubble Sort:"<<endl;
	cout<<"2.Selection Sort :"<<endl;
	cout<<"3.Insertion Sort :"<<endl;
	cout<<"4.Quick Sort :"<<endl;
	cout<<"5.Marge Sort :"<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
		for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
			int temp = a[j+1];
			a[j+1] = a[j];
			a[j] = temp;
			}
		}
		cout<<endl;
	}
	break;
	
	case 2:
		for(int i=0;i<n-1;i++){
		int min=i;

		for(int j=i+1;j<n;j++){
			if(a[j] < a[min])
            min=j;
		}

    int temp=a[i];
    a[i]=a[min];
    a[min]=temp;
}
break; 
case 3:
	for(int i=1;i<n;i++){
    int key=a[i];
    int j=i-1;

    while(j>=0 && a[j]>key){
        a[j+1]=a[j];
        j--;
    }

    a[j+1]=key;
}
break;
case 4:
void quickSort(int a[], int low, int high){
    if(low<high){

        int pivot=a[high];
        int i=low-1;

        for(int j=low;j<high;j++){
            if(a[j]<pivot){
                i++;
                swap(a[i],a[j]);
            }
        }

        swap(a[i+1],a[high]);
        int pi=i+1;

        quickSort(a,low,pi-1);
        quickSort(a,pi+1,high);
    }
}
break;
case 5:
void merge(int a[], int l, int m, int r){
    int L[100], R[100];

    int n1=m-l+1;
    int n2=r-m;

    for(int i=0;i<n1;i++) L[i]=a[l+i];
    for(int j=0;j<n2;j++) R[j]=a[m+1+j];

    int i=0,j=0,k=l;

    while(i<n1 && j<n2){
        if(L[i]<R[j]) a[k++]=L[i++];
        else a[k++]=R[j++];
    }

    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
}

void mergeSort(int a[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}
break;
default:
	cout<<"invalid input: ";
	return 0;
}

cout<<"sorted array: "<<endl;
for(int i=0; i<n; i++){
	cout<<a[i]<<" ";
}
return 0;
}