#include <iostream>
#include "exercicio1.h"

using namespace std;
using namespace mbasic;


int main(int argc, char const *argv[])
{
	
	cout << "Testando a soma (4+2): " << MathBasic::Add(4,2) << endl;  
	cout << "Testando a diferença (4-2): " << MathBasic::Dif(4,2) << endl;  
	cout << "Testando a multiplicação (4*2): " << MathBasic::Mux(4,2) << endl;  
	cout << "Testando a divisão (4/2): " << MathBasic::Div(4,2) << endl;  
	return 0;
}