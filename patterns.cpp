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
void printcpyramid(int n){
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

//Reverse Centered pyramid
void printrcpyramid(int n){
	int x= n-1;
	int z =n-1;
	for(int i=0; i<n;i++){
		//space fomula n+i-z
		for(int j=0; j<n+i-z; j++){
			cout << " ";
		}
		
		//stars formula 2*x+1
		for(int j=0; j<2*x+1; j++){
			cout << "*";
		}
		
		//space
		for(int j=0; j<n+i-z; j++){
			cout << " ";
		}
		cout << endl;
		x--;
	}
	
}

// Diamond 
void printdiamond(int n){
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
	
	int x= n-1;
	int z =n-1;
	for(int i=0; i<n;i++){
		//space fomula n+i-z
		for(int j=0; j<i; j++){
			cout << " ";
		}
		
		//stars formula 2*x+1
		for(int j=0; j<2*x+1; j++){
			cout << "*";
		}
		
		//space
		for(int j=0; j<i; j++){
			cout << " ";
		}
		cout << endl;
		x--;
	}
		
}

// Left base Pyramid
void printlbpyramid(int n){
	// upper half
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout << "* ";
		}cout << endl;
	
	} 
	
	//lower half
	for(int i=n-1;i!=0;i--){
		for(int j=0;j<i;j++){
			cout << "* ";
		}cout << endl;
	}

}

// 1-0 chain left sided pyramid
void print10lpyramid(int n){
	for(int i=1;i<=n;i++){
		int x =i;
		for(int j=1; j<=i;j++){
				
			if(x % 2 !=0 ){
				cout << "1 ";
			
			}
			else {
				cout << "0 ";
			} x--;
		
		}cout << endl;
	}
}

// Left + Right Sided Number Pyramid
void printlrnpyramid(int n){
	int space = 2*(n-1); // Formula for implementing space 
	for(int i=1; i<=n; i++){
		// Number
		for(int j=1; j<=i; j++){
			cout << j  ;
		}
		
		//space
		for(int flag=1; flag<=space; flag ++){
			cout << " ";
		}
		
		// Number
		int counter = i;
		for(int j=1; j<=counter; counter--){
			cout << counter ;
		}
		space = space - 2;
		cout << endl;
	}
}

// Aplphabets Left sided Pyramid
void printalspyramid(int n){
	for(int i=0; i<n;i++){
		for(char ch='A'; ch<='A' +i; ch++){
			cout << ch << " ";
		}
		cout << endl;
	}
}

// Aplphabets Reverse Left sided Pyramid 
void printarlspyramid(int n){
	
	for(int i=1; i<=n; i++){
		char ch = 'A';
		for(int j=n; j>=i; j--){
			cout << ch << " ";
			ch ++;
		}
		cout << endl;
	}
}

//  Same Aplhabets left sided Pyramid
void printsalspyramid(int n){
	char ch = 'A';
	for(int i=1; i<=n; i++){
		for(int j =1; j<=i; j++){
			cout << ch << " ";
			
		}
		ch ++;
		cout << endl;
	}
}

// Aplhabets Centered Pyramid 
void printcapyramid(int n){
	for(int i=0; i<n;i++){
		int breakpoint = (2*i+1)/2;
			//space formula is n-i-1 
			for(int j=0; j<n-i-1; j++){
				cout << " ";
			}
		
			char ch = 'A';
			for(int j =1;j<=2*i+1;j++){
				cout << ch;
				if(j <= breakpoint){
					ch ++;
				}
				else ch --;
			}
		
			//space same as above
			for(int j=0; j<n-i-1; j++){
				cout << " ";
			}
			cout << endl;
	}
}

// Reverse Alphabets Left sided Pyramid 
void printralspyramid(int n){
	char ch = 'A' + (n-1);
	for(int i =1; i<=n; i++){
		char fch = ch;
		for(int j =1; j<=i; j++){
			cout << fch << " ";
			fch ++;
		}
		ch --;
		cout << endl;
	}
}

// Spaced Diamond 
void printsd(int n){
	// upper side 
	int space2 = 0;
	for(int i=1; i<=n;i++){
		// Star
		for(int j=n;j>=i;j--){
			cout << "*";
		}
		// space 
		for(int flag=1;flag<=space2; flag++){
			cout << " ";
		}
		// Star
		for(int j=n;j>=i;j--){
			cout << "*";
		}
		space2 = space2 + 2;
		cout<< endl;
	}
	// lower side 
	int space = 2*(n-1); // Formula for implementing space 
	for(int i=1; i<=n; i++){
		// star
		for(int j=1; j<=i; j++){
			cout << "*"  ;
		}
		
		//space
		for(int flag=1; flag<=space; flag ++){
			cout << " ";
		}
		
		// Star
		int counter = i;
		for(int j=1; j<=counter; counter--){
			cout << "*";
		}
		space = space - 2;
		cout << endl;
	}
}

// Left Base Pyramid + Right Base Pyramid 
void printlb_rbp(int n){
	// Upper 
	int space = 2*(n-1); // Formula for implementing space 
	for(int i=1; i<=n; i++){
		// star
		for(int j=1; j<=i; j++){
			cout << "*"  ;
		}
		
		//space
		for(int flag=1; flag<=space; flag ++){
			cout << " ";
		}
		
		// Star
		int counter = i;
		for(int j=1; j<=counter; counter--){
			cout << "*";
		}
		space = space - 2;
		cout << endl;
	}
	
	// Lower side 
	int space2 = 0;
	for(int i=1; i<=n;i++){
		// Star
		for(int j=n;j>=i;j--){
			cout << "*";
		}
		// space 
		for(int flag=1;flag<=space2; flag++){
			cout << " ";
		}
		// Star
		for(int j=n;j>=i;j--){
			cout << "*";
		}
		space2 = space2 + 2;
		cout<< endl;
	}
}

// Square 
void printsquare(int n){
	// boundary stars
	for(int i =0; i<n;i++){
		for(int j =0; j<n; j++){
			if(i == 0 || j ==0 || i == n-1 || j == n-1){
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}
}


int main(){
	int n;
	// Introduction
	cout << "--------Pattern Play Ground---------------" << endl << "!!!! NOTE: SOME Patterns works best in more rows rather than 1-3" << endl << endl << endl;
	// All the available Patterns
	string pname[]= {"Leftsided Pyramid","Numbered Leftsided Pyramid","Same number Leftsided Pyramid",
					 "Reverse Leftsided Pyramid", "Reverse Number Leftsided Pyramid ", "Centerd Pyramid",
					 "Reverse Centered pyramid", "Diamond", "Left base Pyramid","1-0 chain left sided pyramid",
					 "Left + Right Sided Number Pyramid", "Aplphabets Left sided Pyramid",
					 "Aplphabets Reverse Left sided Pyramid", "Same Aplhabets left sided Pyramid",
					 "Aplhabets Centered Pyramid" , "Reverse Alphabets Left sided Pyramid",
					 "Spaced Diamond", "Left Base Pyramid + Right Base Pyramid", "Square"};
	
	// Detemining The Size of array
	int size = sizeof(pname) / sizeof(pname[0]);
	
	// Printing the Pattern Names 
	for(int i=0;i<size; i++){
		cout << i << ".\t" << pname[i] << endl;	
	}
	
	
	cout <<endl << "Choose the pattern by Enter the Number of Your choice: "<< endl;
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
			printcpyramid(n);
			break;
		case 6:
			//Reverse Centered pyramid
			cout << "Enter the Number of Rows" << endl;
			cin >>n;
			cout << endl;
			printrcpyramid(n);
		case 7:
			// Diamond 
			cout << "Enter the Number of Rows" << endl;
			cin >> n;
			cout << endl;
			printdiamond(n);
			break;
		case 8:
			// Left base Pyramid
			cout << "Enter the Height of Pyramid" << endl;
			cin >> n;
			cout << endl;
			printlbpyramid(n);
			break;
		case 9:
			// 1-0 chain left sided pyramid
			cout << "Enter the Number of Rows:" << endl;
			cin >> n;
			cout << endl;
			print10lpyramid(n);
			break;
		case 10:
			//Left + Right Sided Number Pyramid
			cout << "Enter the Number of Rows:" << endl;
			cin >> n;
			cout << endl;
			printlrnpyramid(n);
			break;
		case 11:
			// Aplphabets Left sided Pyramid
			cout << "Enter the Number of Rows:" << endl;
			cin >> n;
			cout << endl;
			printalspyramid(n);
			break;
		case 12:
			// Aplphabets Reverse Left sided Pyramid
			cout << "Enter the Number of Rows:" << endl;
			cin >> n;
			cout << endl;
			printarlspyramid(n);
			break;
		case 13:
			// Same Aplhabets left sided Pyramid
			cout << "Enter the Number of Rows:" << endl;
			cin >> n;
			cout << endl;
			printsalspyramid(n);
			break;
		case 14:
			// Aplhabets Centered Pyramid
			cout << "Enter the Number of Rows:" << endl;
			cin >> n;
			cout << endl;
			printcapyramid(n);
			break;
		case 15:
			// Reverse Alphabets Left sided Pyramid
			cout << "Enter the Number of Rows:" << endl;
			cin >> n;
			cout << endl;
			printralspyramid(n);
			break;
		case 16:
			// Spaced Diamond
			cout << "Enter the size (total no. of rows/2):" << endl;
			cin >> n;
			cout << endl;
			printsd(n);
			break;
		case 17:
			// Left Base Pyramid + Right Base Pyramid
			cout << "Enter the size (total no. of rows/2):" << endl;
			cin >> n;
			cout << endl;
			printlb_rbp(n);
			break;
		case 18:
			// square
			cout << "Enter the Number of Rows:" << endl;
			cin >> n;
			cout << endl;
			printsquare(n);
			break;
					
		default:
			cout << "Enter the Right Choice"; 
			
	}

		
	
}
