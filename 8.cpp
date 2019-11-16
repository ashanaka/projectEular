#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int  numbers[100];
	
	long line;
	cin >> line;
	
	for(int i=0; i<100; i++){
		numbers[i] = (int)line;
	}
	
//	cout << numbers[2];
	for(int i=0; i<100; i++){
		cout << numbers[i];
	}
	
	return 0;
}
