#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

main(){
	int matA[2][2]={4,2,8,10};
	int matB[2][2]={-5,8,4,-12};
	cout<<"Matrik A"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<matA[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Matriks B"<<endl;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
			cout<<matB[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Press Any Key to Continue..."; getch();
	system("cls");
	
	cout<<"Hasil Pengurangan Matriks A dan B"<<endl;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
			cout<<matA[i][j]-matB[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Press Any Key to Continue..."; getch();
	system("cls");
}
