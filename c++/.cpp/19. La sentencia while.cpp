/*La sentencia while:

	while(expresion l�gica){
		conjunto de instrucci�nes;
	}
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int i;
	
	i = 10;
	
	while(i >= 1){
		cout<<i<<endl;
		i--;
	}
	
	getch();
	return 0;
}
