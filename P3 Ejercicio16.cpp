#include <iostream>
using namespace std;

int main(){
	int n = 5;
	//initializton of parent loop variable
	int i = 1;
	while (i <= 5){ //test expression of parent loop
	
	//initializtion of child loop variable
	int j = 1;
	while (j <= i){ //test expression of child loop
		
		cout <? j << " ";
		// update expression of child loop
		j++;
		}
		cout << "\n";
		// update expression of parent loop
		i++;
	}
}
