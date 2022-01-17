#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	srand(time(0));
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int *money[] = {&a, &b, &c, &d};
	int random1 = rand()%4,random2 = rand()%4;

	while (random1 == random2){
		random2 = rand()%4;
	}
		int temp;
		temp = *money[random1];
		*money[random1] = *money[random2];
		*money[random2] = temp;
	}