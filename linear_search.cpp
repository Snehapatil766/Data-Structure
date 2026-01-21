#include<iostream>
using namespace std;
int main(){
int no,m,i;
int a[no];
cout<<"Enter no. of elements:";
cin>>no;
cout<<"Enter the elements:";
	for(i=0;i<no;i++){
		cin>>a[i];
	}
	cout<<"no. to be matched:";
	cin>>m;
	for(i=0;i<no;i++){
		if (no==m){
		cout<<"no. is matched";
		break;
	    }
		else{
		cout<<"no. is not matched";
		break;
		}
		
	}
	return 0;
}
