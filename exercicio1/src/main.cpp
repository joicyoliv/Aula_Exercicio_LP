#include <iostream>
#include "exercicio1.h"

using namespace std;
using namespace mbasic;


int main(int argc, char const *argv[])
{
	for(int i=0 ; i < 5 ; ++i ){
		cout << "Testando a soma ("<<i << "+" << i*2 << "): " << MathBasic::Add(i,i*2) << endl; 
	}
	for(int i=0 ; i < 5 ; ++i ){
		cout << "Testando a diferença ("<<i << "-" << i*2 << "): " << MathBasic::Dif(i,i*2) << endl; 
	}
	for(int i=0 ; i < 5 ; ++i ){
		cout << "Testando a multiplicação ("<<i << "*" << i*2 << "): " << MathBasic::Mux(i,i*2) << endl; 
	}
	for(int i=0 ; i < 5 ; ++i ){
		cout << "Testando a divisão ("<<i*2 << "/" << i << "): " << MathBasic::Div(i*2,i) << endl; 
	}
	/*
	cout << "Testando a soma (4+2): " << MathBasic::Add(4,2) << endl;  
	cout << "Testando a diferença (4-2): " << MathBasic::Dif(4,2) << endl;  
	cout << "Testando a multiplicação (4*2): " << MathBasic::Mux(4,2) << endl;  
	cout << "Testando a divisão (4/2): " << MathBasic::Div(4,2) << endl;  
	*/
	return 0;
}