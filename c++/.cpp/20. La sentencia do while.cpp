/*La sentencia do while

	do{
		conjunto de instrucci�nes;
	}while(expresi�n l�gica)
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int i;
	
	i = 10;
	
	do{
		cout<<i<<endl;
		i--;
	}while(i >= 1);
	
	system("pause");
	return 0;
}
