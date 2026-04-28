#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter size of an stack: "<<endl;
	cin>>n;
	
	int a[n];
	int top = -1;
	int value;
	
	for(int i=0; i<n; i++){
		cout<<"enter value: "<<endl;
		cin>>value;
		
		if(top!=n-1){
			top++;
			a[top] = value;
		}else{
			cout<<"overflow Stack "<<endl;
		}
	}
	cout<<"pop element";
	if(top == -1){
			value = a[top];
			top--;
		}
		
	cout<<"stack by using pushing & pop  ";
	for(int i= top; i>=0; i--){
		cout<<a[i]<<" ";
	}
		
		
	return 0;
}