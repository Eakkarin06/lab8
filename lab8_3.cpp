#include<iostream>
using namespace std;

char before(char x){
	char y;
	if(x =='A'){
		y = 'Z';
	}
	else if(x>'A'&&x<='Z'){
		y = x-1;
	}
	else{
		y = '0';
	}
	return y;
}

