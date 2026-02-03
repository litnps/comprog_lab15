#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &a,int &b,int &c,int &d){
	int n = rand()%4+1;
	for(int i = 0 ; i < n ; ++i){
		int m = rand()%6;
		if(m == 0){
			int temp = a;
			a = b;
			b = temp;
		}
		else if(m == 1){
			int temp = a;
			a = c;
			c = temp;
		}
		else if(m == 2){
			int temp = a;
			a = d;
			d = temp;
		}
		else if(m == 3){
			int temp = c;
			c = b;
			b = temp;
		}
		else if(m == 4){
			int temp = d;
			d = b;
			b = temp;
		}
		else{
			int temp = d;
			d = c;
			c = temp;
		}
	}
	return;
}