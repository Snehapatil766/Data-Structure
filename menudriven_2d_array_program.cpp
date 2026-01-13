#include<iostream>
using namespace std;
int main(){
int i, j, ch;
int a[2][2], b[2][2], c[2][2];
cout << "Enter elements of matrix A:\n";
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            cin >> a[i][j];

cout << "Enter elements of matrix B:\n";
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            cin >> b[i][j];

cout<<"Enter your choice\n";
cout<<"1. Addition\n";
cout<<"2. Subtraction\n";
cout<<"3. Multiplication\n";
cout<<"4. Transpose of A\n";
cout<<"5. Identity Matrix\n";
cin >> ch;
switch(ch){
case 1:
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        c[i][j] = a[i][j] + b[i][j];
        cout<<"Addition of matrices:\n";
break;
case 2:
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        c[i][j] = a[i][j] - b[i][j];
        cout<<"Subtraction of matrices:\n";
break;
case 3:
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        c[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j];
        cout <<"Multiplication of matrices:\n";
break;
case 4:
    cout<<"Transpose of Matrix A:\n";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
        cout<<a[j][i] << " ";
        cout<<endl;
        }
return 0;
case 5:
    cout<<"Identity Matrix:\n";
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
            if(i==j) cout << "1 ";
            else 
			cout << "0 ";
            }
                cout << endl;
            }
return 0;
default:
    cout << "Invalid Choice";
        return 0;
}
for(i=0;i<2;i++){
    for(j=0;j<2;j++)
    cout << c[i][j] << " ";
    cout << endl;
    }
return 0;
}

