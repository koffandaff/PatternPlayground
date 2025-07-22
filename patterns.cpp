#include<bits/stdc++.h>
using namespace std;

//left sided pyramid 
void printlspyramid(int n){
	cout << "Left Sided Pyramid" << endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i;j++){
			cout << "* ";
		}
		cout << endl;
	}
}
// Numbered leftsided pyramid 
void printnlspyramid(int n){
	n =n+1;
	cout << "Numbered Leftsided Pyramid" << endl;
	for(int i=1;i<n;i++){
		for(int j=1;j<=i;j++){
			cout << j << " ";
		}	
		cout<< endl; 
	}
}
// same number leftsided pyramid 
void printsnlspyramid(int n){
	for(int i=1;i<n+1;i++){
		for(int j=1;j<=i;j++){
			cout << i << " " ;
		}
		cout << endl;
	}
}

// Reverse Leftsided Pyramid
void printrlspyramid(int n){
	for(int i=1;i<=n;i++){
		for(int j=5;j>i; j--){
			cout << "* ";
		}
		cout << endl;
	}
}

//Reverse Number Leftsided Pyramid
void printrnlspyramid(int n){
	int f;
	for(int i=1; i<=n; i++){
		f=1;
		for(int j=5; j>=i; j--){
			cout << f << " ";
			f++;
		}
		cout << endl;
	}	
}

//Centerd Pyramid
void printrcpyramid(int n){
		for(int i=0; i<n;i++){
			//space formula is n-i-1 
			for(int j=0; j<n-i-1; j++){
				cout << " ";
			}
		
			//stars formula is 2 x i +1 
			for(int j=0; j<2*i+1; j++){
				cout << "*";
			}
		
			//space same as above
			for(int j=0; j<n-i-1; j++){
				cout << " ";
			}
			cout << endl;
	}
}

int main(){
	int n;
	// All the available Patterns
	string pname[]= {"Leftsided Pyramid","Numbered Leftsided Pyramid","Same number Leftsided Pyramid",
					 "Reverse Leftsided Pyramid", "Reverse Number Leftsided Pyramid ", "Centerd Pyramid"};
	
	// Detemining The Size of array
	int size = sizeof(pname) / sizeof(pname[0]);
	
	// Printing the Pattern Names 
	for(int i=0;i<size; i++){
		cout << i << ".\t" << pname[i] << endl;	
	}
	
	
	cout <<endl << "Choose the patter by Enter the Number of Your choice: "<< endl;
	int c;
	cin >> c;
	cout << endl;
	
	switch(c){
		case 0: 
			cout << "Enter the Number of Rows for the Leftsided Pyramid" << endl;
			cin >> n;
			cout << endl;
			printlspyramid(n);
			break;
		case 1:
			// Numbered pyramid 
			
			cout << "Enter the Number of Rows for the numbered leftsided Pyramid" << endl;
			cin >> n;
			cout << endl;
			printnlspyramid(n);
			break;
		case 2:
			// same number Left sided Pyramid
			cout << "Enter the Number of Rows" << endl;
			cin >> n ;
			cout <<  endl;
			printsnlspyramid(n);
		case 3:
			// reverse leftsided pyramid 
			cout << "Enter the Number of Rows" << endl;
			cin >> n;
			cout << endl;
			printrlspyramid(n);
			break;
		case 4:
			//Reverse Number Leftsided Pyramid
			cout << "Enter the Number of Rows" << endl;
			cin >>n;
			cout << endl;
			printrnlspyramid(n);
			break;
		case 5:
			// Centerd Pyramid	
			cout << "Enter the Number of Rows" << endl;
			cin >>n;
			cout << endl;
			printrcpyramid(n);
			break;
		
		default:
			cout << "Enter the Right Choice"; 
			
	}

		
	
}
