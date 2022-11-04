//Pasar una palabra a minusculas - Función strlwr()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "PROGRAMACIONats";
	
	strlwr(palabra);
	
	cout<<palabra<<endl;
	
	getch();
	return 0;
}
