#include<iostream>
#include "square.h"
using namespace std;

int Square::area()
{
	return len * len;
}
int Square::getLen()
{
	return len;
}
void Square::setLen(int n)
{
	if(n < 1){
		cout << "len setting error" << endl;
		n = 1;
		len = n;
	}
	else{
		len = n;
	}
	
}
